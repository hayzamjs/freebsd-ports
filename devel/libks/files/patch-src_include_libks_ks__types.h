--- src/include/libks/ks_types.h.orig	2026-05-09 17:13:40 UTC
+++ src/include/libks/ks_types.h
@@ -161,8 +161,12 @@ KS_BEGIN_EXTERN_C
 	#include <Rpc.h>
 	typedef UUID ks_uuid_t;
 #else
+	#ifdef KS_PLAT_FBSD
+	#include <uuid.h>
+	#else
 	#include <uuid/uuid.h>
-
+	#endif
+	
 	/* Use a structure rather then uuids char array, that way
 	 * we can return it by value*/
 	typedef struct ks_uuid_s {
