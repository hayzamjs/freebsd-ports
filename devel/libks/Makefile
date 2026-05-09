PORTNAME=	libks
DISTVERSIONPREFIX=	v
DISTVERSION=	2.0.10
CATEGORIES=	devel

MAINTAINER=	hayzam@alchemilla.io
COMMENT=	Foundational support library for SignalWire C products
WWW=		https://github.com/signalwire/libks

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/copyright

LIB_DEPENDS=	libuuid.so:misc/libuuid

USES=		cmake compiler:c11 pkgconfig ssl
USE_GITHUB=	yes
GH_ACCOUNT=	signalwire
GH_PROJECT=	libks

USE_LDCONFIG=	yes

DOCSDIR=	${PREFIX}/share/doc/libks2

CMAKE_OFF=	WITH_PACKAGING

post-patch:
	@${FIND} ${WRKSRC} -name '*.orig' -delete

.include <bsd.port.mk>
