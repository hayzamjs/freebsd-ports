--- src/ks_json_check.c.orig	2026-05-09 17:13:46 UTC
+++ src/ks_json_check.c
@@ -23,8 +23,13 @@
  *
  */
 #include "libks/ks.h"
+
 #ifndef KS_PLAT_WIN
+#ifdef KS_PLAT_FBSD
+#include <uuid.h>
+#else
 #include <uuid/uuid.h>
+#endif
 #endif
 #include "cJSON/cJSON.h"
 
