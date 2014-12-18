/* config.h.cmake.  Generated from CMakeLists.txt by cmake.  */

/* general constants */
#define CONFIGURE_OPTIONS    ""

#define HOST_CPU             "x86_64"
#define HOST_OS              "Linux"

#define VERSION              "4.0.6"
#define PACKAGE              "groonga"
#define PACKAGE_NAME         "groonga"
#define PACKAGE_STRING       "groonga 4.0.6"
#define PACKAGE_TARNAME      "groonga"
#define PACKAGE_URL          ""
#define PACKAGE_VERSION      "4.0.6"

/* groonga related constants */
#define GRN_CONFIG_PATH      ""
#define GRN_LOG_PATH         "/usr/local/mysql/var/log/groonga/groonga.log"
#define GRN_VERSION          "4.0.6"

#define GRN_DEFAULT_DB_KEY   ""
#define GRN_DEFAULT_ENCODING ""
#define GRN_DEFAULT_MATCH_ESCALATION_THRESHOLD \
  0
#define GRN_DEFAULT_RELATIVE_DOCUMENT_ROOT \
  "share/groonga/html/admin"
#define GRN_DEFAULT_DOCUMENT_ROOT \
  "/usr/local/mysql/share/groonga/html/admin"

#define GRN_STACK_SIZE       1024

#define GRN_LOCK_TIMEOUT     10000000
#define GRN_LOCK_WAIT_TIME_NANOSECOND \
  1000000

#define GRN_RELATIVE_PLUGINS_DIR \
  "lib/groonga/plugins"
#define GRN_PLUGINS_DIR      "/home/denis/mysql//lib/groonga/plugins"
#define GRN_PLUGIN_SUFFIX    ".so"

#define GRN_QUERY_EXPANDER_TSV_RELATIVE_SYNONYMS_FILE "synonyms.tsv"
#define GRN_QUERY_EXPANDER_TSV_SYNONYMS_FILE          "/home/denis/mysql//share/groonga/synonyms.tsv"

#define GRN_RELATIVE_RUBY_SCRIPTS_DIR \
  "lib/groonga/scripts/ruby"
#define GRN_RUBY_SCRIPTS_DIR "/home/denis/mysql//lib/groonga/scripts/ruby"

#define GRN_DLL_FILENAME     L"libgroonga.so"

/* build switches */
/* #undef USE_MEMORY_DEBUG */
/* #undef USE_MAP_HUGETLB */
/* #undef USE_AIO */
/* #undef USE_DYNAMIC_MALLOC_CHANGE */
#define USE_EPOLL
/* #undef USE_EXACT_ALLOC_COUNT */
/* #undef USE_FAIL_MALLOC */
/* #undef USE_FUTEX */
/* #undef USE_KQUEUE */
/* #undef USE_MSG_MORE */
/* #undef USE_MSG_NOSIGNAL */
/* #undef USE_POLL */
/* #undef USE_QUERY_ABORT */
/* #undef USE_SELECT */

/* compiler specific build options */
#define _FILE_OFFSET_BITS 64
#ifndef _GNU_SOURCE
 #define _GNU_SOURCE
#endif
/* #undef _ISOC99_SOURCE */
/* #undef _LARGE_FILES */
/* #undef _NETBSD_SOURCE */
/* #undef _XOPEN_SOURCE */
/* #undef _XPG4_2 */
/* #undef __EXTENSIONS__ */

/* build environment */
/* #undef WORDS_BIGENDIAN */

/* packages */
/* #undef GRN_WITH_BENCHMARK */
/* #undef GRN_WITH_CUTTER */
/* #undef GRN_WITH_KYTEA */
/* #undef GRN_WITH_LIBMEMCACHED */
/* #undef GRN_WITH_LZO */
/* #undef GRN_WITH_MECAB */
/* #undef GRN_WITH_MESSAGE_PACK */
/* #undef GRN_WITH_MRUBY */
#define GRN_WITH_NFKC
/* #undef GRN_WITH_ZEROMQ */
/* #undef GRN_WITH_ZLIB */

/* headers */
#define HAVE_DLFCN_H
#define HAVE_ERRNO_H
#define HAVE_EXECINFO_H
#define HAVE_INTTYPES_H
/* #undef HAVE_LINUX_FUTEX_H */
#define HAVE_MEMORY_H
#define HAVE_NETDB_H
#define HAVE_NETINET_IN_H
#define HAVE_NETINET_TCP_H
#define HAVE_PTHREAD_H
#define HAVE_SIGNAL_H
#define HAVE_STDINT_H
#define HAVE_STDLIB_H
#define HAVE_STRINGS_H
#define HAVE_STRING_H
#define HAVE_SYS_MMAN_H
#define HAVE_SYS_PARAM_H
#define HAVE_SYS_RESOURCE_H
#define HAVE_SYS_SELECT_H
#define HAVE_SYS_SOCKET_H
#define HAVE_SYS_STAT_H
#define HAVE_SYS_SYSCALL_H
#define HAVE_SYS_SYSCTL_H
#define HAVE_SYS_TIME_H
#define HAVE_SYS_TYPES_H
#define HAVE_SYS_WAIT_H
#define HAVE_TIME_H
#define HAVE_UCONTEXT_H
#define HAVE_UNISTD_H

/* libraries */
/* #undef HAVE_LIBEDIT */
/* #undef HAVE_LIBEVENT */
#define HAVE_LIBM
#define HAVE_LIBRT

/* structs */
/* #undef HAVE_MECAB_DICTIONARY_INFO_T */

/* functions */
/* #undef HAVE__STRNICMP */
/* #undef HAVE__STRTOUI64 */
#define HAVE_BACKTRACE
/* #undef HAVE_CLOCK */
#define HAVE_CLOCK_GETTIME
#define HAVE_CLOSE
#define HAVE_FPCLASSIFY
#define HAVE_GMTIME_R
#define HAVE_LOCALTIME_R
#define HAVE_MKOSTEMP
#define HAVE_OPEN
#define HAVE_READ
#define HAVE_STRNCASECMP
#define HAVE_STRTOULL
#define HAVE_WRITE
/* #undef HAVE_PTHREAD_MUTEXATTR_SETPSHARED */
/* #undef HAVE_PTHREAD_CONDATTR_SETPSHARED */
