# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# compile C with /usr/bin/cc
C_FLAGS =  -msse4.2 -std=gnu99 -Wall -Wstrict-prototypes -fno-strict-aliasing -rdynamic -funroll-loops -Wno-packed-bitfield-compat -fPIC  -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DHAVE_FCNTL_H=1 -DHAVE_ARPA_INET_H=1 -DHAVE_SYS_TIME_H=1 -DHAVE_SYS_SOCKET_H=1 -DHAVE_STRERROR=1 -DHAVE_SOCKET=1 -DHAVE_MEMSET=1 -DHAVE_GETTIMEOFDAY=1 -DHAVE_STDLIB_H=1 -DHAVE_MALLOC=1 -DHAVE_LIBSCTP  -msse4.2 -std=gnu99 -Wall -Wstrict-prototypes -fno-strict-aliasing -rdynamic -funroll-loops -Wno-packed-bitfield-compat -fPIC  -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DHAVE_FCNTL_H=1 -DHAVE_ARPA_INET_H=1 -DHAVE_SYS_TIME_H=1 -DHAVE_SYS_SOCKET_H=1 -DHAVE_STRERROR=1 -DHAVE_SOCKET=1 -DHAVE_MEMSET=1 -DHAVE_GETTIMEOFDAY=1 -DHAVE_STDLIB_H=1 -DHAVE_MALLOC=1 -DHAVE_LIBSCTP -fstack-protector-all -g -DMALLOC_CHECK_=3 -DDEBUG_IS_ON=1 -DTRACE_IS_ON=1 -O0  

C_DEFINES = -DASN1_MINIMUM_VERSION=924 -DCMAKER -DCMAKE_BUILD_TYPE=\"Debug\" -DDAEMONIZE=0 -DDISABLE_ITTI_DETECT_SUB_TASK_ID=1 -DDISPLAY_LICENCE_INFO=0 -DENABLE_ITTI=1 -DENABLE_ITTI_ANALYZER=0 -DENABLE_LIBGTPNL=0 -DENABLE_OPENFLOW=0 -DENABLE_OPENFLOW_MOSAIC=0 -DEPC_BUILD=0 -DGTPV1U_LINEAR_TEID_ALLOCATION=0 -DITTI_LITE=0 -DITTI_TASK_STACK_SIZE=2097152 -DLOG_OAI=1 -DLOG_OAI_CLEAN_HARD=0 -DMESSAGE_CHART_GENERATOR=0 -DNETTLE_VERSION_MAJOR=3 -DNETTLE_VERSION_MINOR=4 -DPACKAGE_BUGREPORT=\"openaircn-user@lists.eurecom.fr\" -DPACKAGE_NAME=\"MME\" -DPACKAGE_VERSION="\"Branch: HEAD Abrev. Hash: 6a7a8719 Date: Wed May 22 16:11:57 2019 +0200\"" -DS1AP_DEBUG_LIST=0 -DS1AP_VERSION=R10 -DSCTP_DUMP_LIST=0 -DSECU_DEBUG=1 -DTRACE_3GPP_SPEC=1 -DTRACE_HASHTABLE=0 -DTRACE_XML=0

C_INCLUDES = -I/home/lixh/v0.1.0/openair-cn/build/mme/build/CMakeFiles/r10.5 -I/home/lixh/v0.1.0/openair-cn/src/s1ap -I/home/lixh/v0.1.0/openair-cn/build/mme/build/CMakeFiles -I/home/lixh/v0.1.0/openair-cn/src/common -I/home/lixh/v0.1.0/openair-cn/src/utils -I/home/lixh/v0.1.0/openair-cn/src/common/itti -I/home/lixh/v0.1.0/openair-cn/src/nas -I/home/lixh/v0.1.0/openair-cn/src/nas/api -I/home/lixh/v0.1.0/openair-cn/src/nas/api/mme -I/home/lixh/v0.1.0/openair-cn/src/nas/api/network -I/home/lixh/v0.1.0/openair-cn/src/nas/emm -I/home/lixh/v0.1.0/openair-cn/src/nas/emm/msg -I/home/lixh/v0.1.0/openair-cn/src/nas/esm/msg -I/home/lixh/v0.1.0/openair-cn/src/nas/ies -I/home/lixh/v0.1.0/openair-cn/src/nas/util -I/home/lixh/v0.1.0/openair-cn/src/secu -I/home/lixh/v0.1.0/openair-cn/src/sctp -I/home/lixh/v0.1.0/openair-cn/src/udp -I/home/lixh/v0.1.0/openair-cn/src/gtpv1-u -I/home/lixh/v0.1.0/openair-cn/src/utils/hashtable -I/home/lixh/v0.1.0/openair-cn/src/utils/msc -I/home/lixh/v0.1.0/openair-cn/src/utils/bstr -I/home/lixh/v0.1.0/openair-cn/src/mme -I/home/lixh/v0.1.0/openair-cn/src/sgw -I/home/lixh/v0.1.0/openair-cn/src/mme_app -I/home/lixh/v0.1.0/openair-cn/src/s6a -I/home/lixh/v0.1.0/openair-cn/src -I/home/lixh/v0.1.0/openair-cn/src/utils/msc/msc -I/home/lixh/v0.1.0/openair-cn/src/test/scenario_player -I/home/lixh/v0.1.0/openair-cn/src/gtpv2-c/nwgtpv2c-0.11/include -I/home/lixh/v0.1.0/openair-cn/src/gtpv2-c/nwgtpv2c-0.11/shared -I/home/lixh/v0.1.0/openair-cn/src/gtpv2-c/gtpv2c_ie_formatter/shared -I/home/lixh/v0.1.0/openair-cn/src/s11 -I/home/lixh/v0.1.0/openair-cn/src/s10 -I/home/lixh/v0.1.0/openair-cn/src/nas/emm/sap -I/home/lixh/v0.1.0/openair-cn/src/nas/esm -I/home/lixh/v0.1.0/openair-cn/src/nas/esm/sap -I/usr/include/libxml2 

