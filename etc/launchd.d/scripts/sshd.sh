#!/bin/sh
#
# Removed dependency from /etc/rc.

timeout=300

user_reseed()
{
	(
	seeded=`sysctl -n kern.random.sys.seeded 2>/dev/null`
	if [ "${seeded}" != "" ] ; then
		echo "Setting entropy source to blocking mode."
		echo "===================================================="
		echo "Type a full screenful of random junk to unblock"
		echo "it and remember to finish with <enter>. This will"
		echo "timeout in ${timeout} seconds, but waiting for"
		echo "the timeout without typing junk may make the"
		echo "entropy source deliver predictable output."
		echo ""
		echo "Just hit <enter> for fast+insecure startup."
		echo "===================================================="
		sysctl kern.random.sys.seeded=0 2>/dev/null
		read -t ${timeout} junk
		echo "${junk}" `sysctl -a` `date` > /dev/random
	fi
	)
}

sshd_keygen()
{
	(
	umask 022

	# Can't do anything if ssh is not installed
	[ -x /usr/bin/ssh-keygen ] || {
		echo "/usr/bin/ssh-keygen does not exist."
		return 1
	}

	if [ -f /etc/ssh/ssh_host_key ]; then
		echo "You already have an RSA host key" \
		    "in /etc/ssh/ssh_host_key"
		echo "Skipping protocol version 1 RSA Key Generation"
	else
		/usr/bin/ssh-keygen -t rsa1 -b 1024 \
		    -f /etc/ssh/ssh_host_key -N ''
	fi

	if [ -f /etc/ssh/ssh_host_dsa_key ]; then
		echo "You already have a DSA host key" \
		    "in /etc/ssh/ssh_host_dsa_key"
		echo "Skipping protocol version 2 DSA Key Generation"
	else
		/usr/bin/ssh-keygen -t dsa -f /etc/ssh/ssh_host_dsa_key -N ''
	fi

	if [ -f /etc/ssh/ssh_host_rsa_key ]; then
		echo "You already have a RSA host key" \
		    "in /etc/ssh/ssh_host_rsa_key"
		echo "Skipping protocol version 2 RSA Key Generation"
	else
		/usr/bin/ssh-keygen -t rsa -f /etc/ssh/ssh_host_rsa_key -N ''
	fi
	)
}

sshd_precmd()
{
	if [ ! -f /etc/ssh/ssh_host_key -o \
	    ! -f /etc/ssh/ssh_host_dsa_key -o \
	    ! -f /etc/ssh/ssh_host_rsa_key ]; then
		user_reseed
		sshd_keygen
	fi
}

enable=`/sbin/launch_xml -get pfsense.system.enablessh`

if [ $enable != "yes" ]
then
	exit 1
fi

port=`/sbin/launch_xml -get pfsense.system.port`

if [ -z $port ]
then
	port=22
fi

# start here
# used to emulate "requires/provide" functionality
pidfile="/var/run/sshd.pid"
touch $pidfile
sshd_precmd
exec /usr/sbin/sshd -D -p $port

