/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* bfdd */
/* #undef BFD_BSD */

/* bfdd */
#define BFD_LINUX 1

/* BSD v6 sysctl to turn on and off forwarding */
/* #undef BSD_V6_SYSCTL */

/* Mask for config files */
#define CONFIGFILE_MASK 0600

/* Compile with internal cryptographic implementation */
#define CRYPTO_INTERNAL 1

/* Compile with openssl support */
/* #undef CRYPTO_OPENSSL */

/* Build for development */
/* #undef DEV_BUILD */

/* Name of the configuration default set */
#define DFLT_NAME "traditional"

/* Disable BGP installation to zebra */
#define DISABLE_BGP_ANNOUNCE 0

/* Enable BGP VNC support */
#define ENABLE_BGP_VNC 1

/* Report build configs in show version */
#define ENABLE_VERSION_BUILD_CONFIG 1

/* found_ssh */
/* #undef FOUND_SSH */

/* did autoconf checks for atomic funcs */
#define FRR_AUTOCONF_ATOMIC 1

/* frr Group */
#define FRR_GROUP "frr"

/* frr User */
#define FRR_USER "frr"

/* include git version info */
/* #undef GIT_VERSION */

/* GNU Linux */
#define GNU_LINUX 1

/* Have history.h append_history */
#define HAVE_APPEND_HISTORY 1

/* Define to 1 if you have the <asm/types.h> header file. */
#define HAVE_ASM_TYPES_H 1

/* babeld */
#define HAVE_BABELD 1

/* bfdd */
#define HAVE_BFDD 1

/* bgpd */
#define HAVE_BGPD 1

/* BSD ifi_link_state available */
/* #undef HAVE_BSD_IFI_LINK_STATE */

/* BSD link-detect */
/* #undef HAVE_BSD_LINK_DETECT */

/* capabilities */
#define HAVE_CAPABILITIES 1

/* Have monotonic clock */
#define HAVE_CLOCK_MONOTONIC 1

/* Have clock_nanosleep() */
#define HAVE_CLOCK_NANOSLEEP 1

/* Have cpu-time clock */
#define HAVE_CLOCK_THREAD_CPUTIME_ID 1

/* Enable configuration rollbacks */
/* #undef HAVE_CONFIG_ROLLBACKS */

/* Compile Special Cumulus Code in */
/* #undef HAVE_CUMULUS */

/* define if the compiler supports basic C++11 syntax */
/* #undef HAVE_CXX11 */

/* Compile extensions for a DataCenter */
/* #undef HAVE_DATACENTER */

/* Define to 1 if you have the declaration of `be32dec', and to 0 if you
   don't. */
#define HAVE_DECL_BE32DEC 0

/* Define to 1 if you have the declaration of `be32enc', and to 0 if you
   don't. */
#define HAVE_DECL_BE32ENC 0

/* Define to 1 if you have the declaration of `PROTOBUF_C_LABEL_NONE', and to
   0 if you don't. */
/* #undef HAVE_DECL_PROTOBUF_C_LABEL_NONE */

/* Define to 1 if you have the declaration of `TCP_MD5SIG', and to 0 if you
   don't. */
#define HAVE_DECL_TCP_MD5SIG 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Have dlinfo RTLD_DI_LINKMAP */
#define HAVE_DLINFO_LINKMAP 1

/* Have dlinfo RTLD_DI_ORIGIN */
#define HAVE_DLINFO_ORIGIN 1

/* Enable DPDK backend */
/* #undef HAVE_DPDK */

/* eigrpd */
#define HAVE_EIGRPD 1

/* Have elf_getdata_rawchunk() */
#define HAVE_ELF_GETDATA_RAWCHUNK 1

/* Define to 1 if you have the <endian.h> header file. */
#define HAVE_ENDIAN_H 1

/* Define to 1 if you have the `explicit_bzero' function. */
#define HAVE_EXPLICIT_BZERO 1

/* fabricd */
#define HAVE_FABRICD 1

/* fpm_listener */
/* #undef HAVE_FPM_LISTENER */

/* Have gelf_getnote() */
#define HAVE_GELF_GETNOTE 1

/* Define to 1 if you have the `getgrouplist' function. */
#define HAVE_GETGROUPLIST 1

/* Glibc backtrace */
#define HAVE_GLIBC_BACKTRACE 1

/* Enable the gRPC northbound plugin */
/* #undef HAVE_GRPC */

/* Define to 1 if you have the <inet/nd.h> header file. */
/* #undef HAVE_INET_ND_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Have IP_FREEBIND */
#define HAVE_IP_FREEBIND 1

/* Have IP_PKTINFO */
#define HAVE_IP_PKTINFO 1

/* Have IP_RECVDSTADDR */
/* #undef HAVE_IP_RECVDSTADDR */

/* Have IP_RECVIF */
/* #undef HAVE_IP_RECVIF */

/* isisd */
#define HAVE_ISISD 1

/* Define to 1 if you have the <json-c/json.h> header file. */
#define HAVE_JSON_C_JSON_H 1

/* Define to 1 if you have the <lauxlib.h> header file. */
/* #undef HAVE_LAUXLIB_H */

/* Capabilities */
#define HAVE_LCAPS 1

/* ldpd */
#define HAVE_LDPD 1

/* Define to 1 if you have the `crypt' library (-lcrypt). */
#define HAVE_LIBCRYPT 1

/* Define to 1 if you have the `crypto' library (-lcrypto). */
/* #undef HAVE_LIBCRYPTO */

/* Define to 1 if you have the `elf' library (-lelf). */
#define HAVE_LIBELF 1

/* Define to 1 if you have the `pcre2-posix' library (-lpcre2-posix). */
/* #undef HAVE_LIBPCRE2_POSIX */

/* Define to 1 if you have the `pcreposix' library (-lpcreposix). */
/* #undef HAVE_LIBPCREPOSIX */

/* Define to 1 if you have the `resolv' library (-lresolv). */
/* #undef HAVE_LIBRESOLV */

/* libunwind */
/* #undef HAVE_LIBUNWIND */

/* Define to 1 if you have the `yang' library (-lyang). */
#define HAVE_LIBYANG 1

/* Define to 1 if you have the <link.h> header file. */
#define HAVE_LINK_H 1

/* Define to 1 if you have the <linux/mroute6.h> header file. */
#define HAVE_LINUX_MROUTE6_H 1

/* Define to 1 if you have the <linux/mroute.h> header file. */
#define HAVE_LINUX_MROUTE_H 1

/* Define to 1 if you have the <linux/version.h> header file. */
#define HAVE_LINUX_VERSION_H 1

/* Enable LTTng support */
/* #undef HAVE_LTTNG */

/* Define to 1 if you have the <luaconf.h> header file. */
/* #undef HAVE_LUACONF_H */

/* Define to 1 if you have the <lualib.h> header file. */
/* #undef HAVE_LUALIB_H */

/* Define to 1 if you have the <lua.h> header file. */
/* #undef HAVE_LUA_H */

/* Define to 1 if you have the `lyd_trim_xpath' function. */
/* #undef HAVE_LYD_TRIM_XPATH */

/* Define to 1 if you have the `ly_strerrcode' function. */
#define HAVE_LY_STRERRCODE 1

/* Define to 1 if you have the `ly_strvecode' function. */
#define HAVE_LY_STRVECODE 1

/* mallinfo */
#define HAVE_MALLINFO 1

/* mallinfo2 */
#define HAVE_MALLINFO2 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <malloc/malloc.h> header file. */
/* #undef HAVE_MALLOC_MALLOC_H */

/* Define to 1 if you have the <malloc_np.h> header file. */
/* #undef HAVE_MALLOC_NP_H */

/* malloc_size */
/* #undef HAVE_MALLOC_SIZE */

/* malloc_usable_size */
#define HAVE_MALLOC_USABLE_SIZE 1

/* mgmtd */
#define HAVE_MGMTD 1

/* mgmtd_testc */
/* #undef HAVE_MGMTD_TESTC */

/* Define to 1 if you have the <minix/config.h> header file. */
/* #undef HAVE_MINIX_CONFIG_H */

/* Define to 1 if you have the <netinet6/in6.h> header file. */
/* #undef HAVE_NETINET6_IN6_H */

/* Define to 1 if you have the <netinet6/in6_var.h> header file. */
/* #undef HAVE_NETINET6_IN6_VAR_H */

/* Define to 1 if you have the <netinet6/ip6_mroute.h> header file. */
/* #undef HAVE_NETINET6_IP6_MROUTE_H */

/* Define to 1 if you have the <netinet6/nd6.h> header file. */
/* #undef HAVE_NETINET6_ND6_H */

/* Define to 1 if you have the <netinet/in6_var.h> header file. */
/* #undef HAVE_NETINET_IN6_VAR_H */

/* Define to 1 if you have the <netinet/in_var.h> header file. */
/* #undef HAVE_NETINET_IN_VAR_H */

/* Define to 1 if you have the <netinet/ip_icmp.h> header file. */
#define HAVE_NETINET_IP_ICMP_H 1

/* Define to 1 if you have the <netinet/ip_mroute.h> header file. */
/* #undef HAVE_NETINET_IP_MROUTE_H */

/* netlink */
#define HAVE_NETLINK 1

/* Have netns */
#define HAVE_NETNS 1

/* Define to 1 if you have the <net/if_dl.h> header file. */
/* #undef HAVE_NET_IF_DL_H */

/* Define to 1 if you have the <net/if_var.h> header file. */
/* #undef HAVE_NET_IF_VAR_H */

/* Define to 1 if you have the <net/netopt.h> header file. */
/* #undef HAVE_NET_NETOPT_H */

/* NET_RT_IFLIST */
/* #undef HAVE_NET_RT_IFLIST */

/* nhrpd */
#define HAVE_NHRPD 1

/* Define to 1 if you have the `openat' function. */
#define HAVE_OPENAT 1

/* Have openpam.h */
/* #undef HAVE_OPENPAM_H */

/* ospf6d */
#define HAVE_OSPF6D 1

/* ospfd */
#define HAVE_OSPFD 1

/* Have pam_misc.h */
/* #undef HAVE_PAM_MISC_H */

/* pathd */
#define HAVE_PATHD 1

/* pbrd */
#define HAVE_PBRD 1

/* pim6d */
#define HAVE_PIM6D 1

/* pimd */
#define HAVE_PIMD 1

/* have NetBSD pollts() */
/* #undef HAVE_POLLTS */

/* Define to 1 if you have the `posix_fallocate' function. */
#define HAVE_POSIX_FALLOCATE 1

/* have Linux/BSD ppoll() */
#define HAVE_PPOLL 1

/* protobuf */
#define HAVE_PROTOBUF 1

/* Have Protobuf version 3 */
/* #undef HAVE_PROTOBUF_VERSION_3 */

/* prctl */
#define HAVE_PR_SET_KEEPCAPS 1

/* Have pthread.h pthread_condattr_setclock */
#define HAVE_PTHREAD_CONDATTR_SETCLOCK 1

/* Define to 1 if you have the `pthread_getthreadid_np' function. */
/* #undef HAVE_PTHREAD_GETTHREADID_NP */

/* Define to 1 if you have the <pthread_np.h> header file. */
/* #undef HAVE_PTHREAD_NP_H */

/* Have PTHREAD_PRIO_INHERIT. */
#define HAVE_PTHREAD_PRIO_INHERIT 1

/* Define to 1 if you have the `pthread_setname_np' function. */
#define HAVE_PTHREAD_SETNAME_NP 1

/* Define to 1 if you have the `pthread_set_name_np' function. */
/* #undef HAVE_PTHREAD_SET_NAME_NP */

/* Have RFC3678 protocol-independed API */
#define HAVE_RFC3678 1

/* ripd */
#define HAVE_RIPD 1

/* ripngd */
#define HAVE_RIPNGD 1

/* Define to 1 if you have the `rl_clear_visible_line' function. */
#define HAVE_RL_CLEAR_VISIBLE_LINE 1

/* Enable IPv6 Routing Advertisement support */
#define HAVE_RTADV 1

/* Have support for scripting */
/* #undef HAVE_SCRIPTING */

/* have __start/stop_section symbols */
#define HAVE_SECTION_SYMS 1

/* Define to 1 if you have the `sendmmsg' function. */
#define HAVE_SENDMMSG 1

/* Define to 1 if you have the `setns' function. */
#define HAVE_SETNS 1

/* sharpd */
/* #undef HAVE_SHARPD */

/* Have SO_BINDANY */
/* #undef HAVE_SO_BINDANY */

/* Enable sqlite3 database */
/* #undef HAVE_SQLITE3 */

/* staticd */
#define HAVE_STATICD 1

/* found stdatomic.h */
#define HAVE_STDATOMIC_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
/* #undef HAVE_STRLCAT */

/* Define to 1 if you have the `strlcpy' function. */
/* #undef HAVE_STRLCPY */

/* Define to 1 if you have the <stropts.h> header file. */
/* #undef HAVE_STROPTS_H */

/* Define to 1 if the system has the type `struct icmphdr'. */
#define HAVE_STRUCT_ICMPHDR 1

/* Define to 1 if the system has the type `struct if6_aliasreq'. */
/* #undef HAVE_STRUCT_IF6_ALIASREQ */

/* Define to 1 if `ifra_lifetime' is a member of `struct if6_aliasreq'. */
/* #undef HAVE_STRUCT_IF6_ALIASREQ_IFRA_LIFETIME */

/* Define to 1 if the system has the type `struct ifaliasreq'. */
/* #undef HAVE_STRUCT_IFALIASREQ */

/* Define to 1 if `ifm_status' is a member of `struct ifmediareq'. */
/* #undef HAVE_STRUCT_IFMEDIAREQ_IFM_STATUS */

/* Define to 1 if `ifi_link_state' is a member of `struct if_data'. */
/* #undef HAVE_STRUCT_IF_DATA_IFI_LINK_STATE */

/* Define to 1 if the system has the type `struct igmpmsg'. */
#define HAVE_STRUCT_IGMPMSG 1

/* Define to 1 if the system has the type `struct in6_aliasreq'. */
/* #undef HAVE_STRUCT_IN6_ALIASREQ */

/* Define to 1 if the system has the type `struct in_pktinfo'. */
#define HAVE_STRUCT_IN_PKTINFO 1

/* Define to 1 if `imr_ifindex' is a member of `struct ip_mreqn'. */
#define HAVE_STRUCT_IP_MREQN_IMR_IFINDEX 1

/* Define to 1 if the system has the type `struct mfcctl'. */
#define HAVE_STRUCT_MFCCTL 1

/* Define to 1 if `msg_hdr' is a member of `struct mmsghdr'. */
#define HAVE_STRUCT_MMSGHDR_MSG_HDR 1

/* Define to 1 if the system has the type `struct nd_opt_adv_interval'. */
#define HAVE_STRUCT_ND_OPT_ADV_INTERVAL 1

/* Define to 1 if `nd_opt_ai_type' is a member of `struct
   nd_opt_adv_interval'. */
/* #undef HAVE_STRUCT_ND_OPT_ADV_INTERVAL_ND_OPT_AI_TYPE */

/* Define to 1 if the system has the type `struct nd_opt_dnssl'. */
/* #undef HAVE_STRUCT_ND_OPT_DNSSL */

/* Define to 1 if the system has the type `struct nd_opt_homeagent_info'. */
/* #undef HAVE_STRUCT_ND_OPT_HOMEAGENT_INFO */

/* Define to 1 if the system has the type `struct nd_opt_rdnss'. */
/* #undef HAVE_STRUCT_ND_OPT_RDNSS */

/* Define to 1 if the system has the type `struct sioc_sg_req'. */
#define HAVE_STRUCT_SIOC_SG_REQ 1

/* Define to 1 if the system has the type `struct sioc_vif_req'. */
#define HAVE_STRUCT_SIOC_VIF_REQ 1

/* Define to 1 if the system has the type `struct sockaddr_dl'. */
/* #undef HAVE_STRUCT_SOCKADDR_DL */

/* Define to 1 if `sdl_len' is a member of `struct sockaddr_dl'. */
/* #undef HAVE_STRUCT_SOCKADDR_DL_SDL_LEN */

/* Define to 1 if `sin_len' is a member of `struct sockaddr_in'. */
/* #undef HAVE_STRUCT_SOCKADDR_IN_SIN_LEN */

/* Define to 1 if `sa_len' is a member of `struct sockaddr'. */
/* #undef HAVE_STRUCT_SOCKADDR_SA_LEN */

/* Define to 1 if `sun_len' is a member of `struct sockaddr_un'. */
/* #undef HAVE_STRUCT_SOCKADDR_UN_SUN_LEN */

/* Define to 1 if `domainname' is a member of `struct utsname'. */
#define HAVE_STRUCT_UTSNAME_DOMAINNAME 1

/* Define to 1 if the system has the type `struct vifctl'. */
#define HAVE_STRUCT_VIFCTL 1

/* Have Linux futex support */
#define HAVE_SYNC_LINUX_FUTEX /**/

/* Have OpenBSD futex support */
/* #undef HAVE_SYNC_OPENBSD_FUTEX */

/* Have FreeBSD _umtx_op() support */
/* #undef HAVE_SYNC_UMTX_OP */

/* Enable sysrepo integration */
/* #undef HAVE_SYSREPO */

/* Define to 1 if you have the <sys/capability.h> header file. */
#define HAVE_SYS_CAPABILITY_H 1

/* Define to 1 if you have the <sys/conf.h> header file. */
/* #undef HAVE_SYS_CONF_H */

/* Define to 1 if you have the <sys/endian.h> header file. */
/* #undef HAVE_SYS_ENDIAN_H */

/* Define to 1 if you have the <sys/ksym.h> header file. */
/* #undef HAVE_SYS_KSYM_H */

/* Define to 1 if you have the <sys/sdt.h> header file. */
/* #undef HAVE_SYS_SDT_H */

/* Define to 1 if you have the <sys/sockio.h> header file. */
/* #undef HAVE_SYS_SOCKIO_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysctl.h> header file. */
/* #undef HAVE_SYS_SYSCTL_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <ucontext.h> header file. */
#define HAVE_UCONTEXT_H 1

/* Define to 1 if `uc_mcontext.gregs' is a member of `ucontext_t'. */
#define HAVE_UCONTEXT_T_UC_MCONTEXT_GREGS 1

/* Define to 1 if `uc_mcontext.regs' is a member of `ucontext_t'. */
/* #undef HAVE_UCONTEXT_T_UC_MCONTEXT_REGS */

/* Define to 1 if `uc_mcontext.regs.nip' is a member of `ucontext_t'. */
/* #undef HAVE_UCONTEXT_T_UC_MCONTEXT_REGS_NIP */

/* Define to 1 if `uc_mcontext.uc_regs' is a member of `ucontext_t'. */
/* #undef HAVE_UCONTEXT_T_UC_MCONTEXT_UC_REGS */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unlinkat' function. */
#define HAVE_UNLINKAT 1

/* Enable USDT probes */
/* #undef HAVE_USDT */

/* Define to 1 if the system has the type `vifi_t'. */
#define HAVE_VIFI_T 1

/* vrrpd */
#define HAVE_VRRPD 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Enable ZeroMQ support */
/* #undef HAVE_ZEROMQ */

/* found __atomic builtins */
/* #undef HAVE___ATOMIC */

/* found __sync builtins */
/* #undef HAVE___SYNC */

/* found __sync_swap builtin */
/* #undef HAVE___SYNC_SWAP */

/* .interp value */
#define INTERP "/lib64/ld-linux-x86-64.so.2"

/* Linux ipv6 Min Hop Count */
#define IPV6_MINHOPCOUNT 73

/* selected method for isis, == one of the constants */
#define ISIS_METHOD ISIS_METHOD_PFPACKET

/* constant value for isis method bpf */
#define ISIS_METHOD_BPF 3

/* constant value for isis method dlpi */
#define ISIS_METHOD_DLPI 2

/* constant value for isis method pfpacket */
#define ISIS_METHOD_PFPACKET 1

/* KAME IPv6 */
/* #undef KAME */

/* Define for compiling with old vpn commands */
/* #undef KEEP_OLD_VPN_COMMANDS */

/* Linux IPv6 stack */
#define LINUX_IPV6 1

/* Mask for log files */
#define LOGFILE_MASK 0600

/* Startup zlog timestamp precision */
#define LOG_TIMESTAMP_PRECISION 0

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Enable mgmtd local validations. */
/* #undef MGMTD_LOCAL_VALIDATIONS_ENABLED */

/* Maximum number of paths for a route */
#define MULTIPATH_NUM 16

/* Netlink extra debugging code */
#define NETLINK_DEBUG 1

/* OpenBSD */
/* #undef OPEN_BSD */


#ifdef __OpenBSD__
#define __wchar_t __wchar_t_ignore
#include <stdint.h>
/* #undef __wchar_t */
#endif


/* Name of package */
#define PACKAGE "frr"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://github.com/frrouting/frr/issues"

/* Define to the full name of this package. */
#define PACKAGE_NAME "frr"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "frr 10.3-dev"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "frr"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "10.3-dev"

/* Have openpam_ttyconv */
/* #undef PAM_CONV_FUNC */

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Use SNMP AgentX to interface with snmpd */
/* #undef SNMP_AGENTX */

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* OSPFAPI */
#define SUPPORT_OSPF_API 1

/* Realms support */
/* #undef SUPPORT_REALMS */

/* Use PAM for authentication */
/* #undef USE_PAM */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable general extensions on macOS.  */
#ifndef _DARWIN_C_SOURCE
# define _DARWIN_C_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable X/Open compliant socket functions that do not require linking
   with -lxnet on HP-UX 11.11.  */
#ifndef _HPUX_ALT_XOPEN_SOCKET_API
# define _HPUX_ALT_XOPEN_SOCKET_API 1
#endif
/* Identify the host operating system as Minix.
   This macro does not affect the system headers' behavior.
   A future release of Autoconf may stop defining this macro.  */
#ifndef _MINIX
/* # undef _MINIX */
#endif
/* Enable general extensions on NetBSD.
   Enable NetBSD compatibility extensions on Minix.  */
#ifndef _NETBSD_SOURCE
# define _NETBSD_SOURCE 1
#endif
/* Enable OpenBSD compatibility extensions on NetBSD.
   Oddly enough, this does nothing on OpenBSD.  */
#ifndef _OPENBSD_SOURCE
# define _OPENBSD_SOURCE 1
#endif
/* Define to 1 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_SOURCE
/* # undef _POSIX_SOURCE */
#endif
/* Define to 2 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_1_SOURCE
/* # undef _POSIX_1_SOURCE */
#endif
/* Enable POSIX-compatible threading on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-5:2014.  */
#ifndef __STDC_WANT_IEC_60559_ATTRIBS_EXT__
# define __STDC_WANT_IEC_60559_ATTRIBS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-1:2014.  */
#ifndef __STDC_WANT_IEC_60559_BFP_EXT__
# define __STDC_WANT_IEC_60559_BFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-2:2015.  */
#ifndef __STDC_WANT_IEC_60559_DFP_EXT__
# define __STDC_WANT_IEC_60559_DFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-4:2015.  */
#ifndef __STDC_WANT_IEC_60559_FUNCS_EXT__
# define __STDC_WANT_IEC_60559_FUNCS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-3:2015.  */
#ifndef __STDC_WANT_IEC_60559_TYPES_EXT__
# define __STDC_WANT_IEC_60559_TYPES_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TR 24731-2:2010.  */
#ifndef __STDC_WANT_LIB_EXT2__
# define __STDC_WANT_LIB_EXT2__ 1
#endif
/* Enable extensions specified by ISO/IEC 24747:2009.  */
#ifndef __STDC_WANT_MATH_SPEC_FUNCS__
# define __STDC_WANT_MATH_SPEC_FUNCS__ 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable X/Open extensions.  Define to 500 only if necessary
   to make mbstate_t available.  */
#ifndef _XOPEN_SOURCE
/* # undef _XOPEN_SOURCE */
#endif


/* Version number of package */
#define VERSION "10.3-dev"

/* StrongSWAN vici socket path */
#define VICI_SOCKET "/var/run/charon.vici"

/* VTY shell */
#define VTYSH 1

/* What pager to use */
#define VTYSH_PAGER "more"

/* VTY Sockets Group */
/* #undef VTY_GROUP */

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Old readline */
/* #undef rl_completion_matches */
