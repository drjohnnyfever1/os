# $FreeBSD$

.include <src.opts.mk>

PACKAGE=runtime
CXXFLAGS+=-pthread
PROG_CXX=devd
SRCS=	bwrite.c devd.cc token.l parse.y y.tab.h
MAN=	devd.8 devd.conf.5

WARNS?=	3

NO_SHARED?=YES

LIBADD=	l util bsdxml

YFLAGS+=-v
CFLAGS+=-I. -I${.CURDIR}

CLEANFILES= y.output

.if ${MK_TESTS} != "no"
SUBDIR+=    tests
.endif

.include <bsd.prog.mk>
