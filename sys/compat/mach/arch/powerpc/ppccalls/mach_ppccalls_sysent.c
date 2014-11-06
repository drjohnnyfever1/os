/* $NetBSD: mach_ppccalls_sysent.c,v 1.9 2009/01/13 22:33:11 pooka Exp $ */

/*
 * System call switch table.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	NetBSD: syscalls.master,v 1.5 2007/02/09 21:55:22 ad Exp
 */

#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD: mach_ppccalls_sysent.c,v 1.9 2009/01/13 22:33:11 pooka Exp $");

#include <sys/param.h>
#include <sys/systm.h>
#include <sys/signal.h>
#include <sys/mount.h>
#include <sys/poll.h>
#include <sys/syscallargs.h>
#include <compat/mach/mach_types.h>
#include <compat/mach/mach_message.h>
#include <compat/mach/arch/powerpc/ppccalls/mach_ppccalls_syscallargs.h>

#define	s(type)	sizeof(type)
#define	n(type)	(sizeof(type)/sizeof (register_t))
#define	ns(type)	n(type), s(type)

struct sysent mach_ppccalls_sysent[] = {
	{ 0, 0, 0,
	    sys_nosys },			/* 0 = unimplemented diagcall */
	{ 0, 0, 0,
	    sys_nosys },			/* 1 = unimplemented vmm_get_version */
	{ 0, 0, 0,
	    sys_nosys },			/* 2 = unimplemented vmm_get_features */
	{ 0, 0, 0,
	    sys_nosys },			/* 3 = unimplemented vmm_init_context */
	{ 0, 0, 0,
	    sys_nosys },			/* 4 = unimplemented vmm_dispatch */
	{ 0, 0, 0,
	    sys_nosys },			/* 5 = unimplemented bb_enable_bluebox */
	{ 0, 0, 0,
	    sys_nosys },			/* 6 = unimplemented bb_disable_bluebox */
	{ 0, 0, 0,
	    sys_nosys },			/* 7 = unimplemented bb_settaskenv */
	{ 0, 0, 0,
	    sys_nosys },			/* 8 = unimplemented vmm_stop_vm */
	{ 0, 0, 0,
	    sys_nosys },			/* 9 = unimplemented dis */
	{ 0, 0, 0,
	    sys_nosys },			/* 10 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 11 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 12 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 13 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 14 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 15 = unimplemented */
};

