#ifndef ATL_INSTINFO_H
   #define ATL_INSTINFO_H

#define ATL_ARCH "Core2Duo64SSE3"
#define ATL_INSTFLAGS "-1 0 -a 1"
#define ATL_F2CDEFS "-DAdd__ -DF77_INTEGER=int -DStringSunStyle"
#define ATL_ARCHDEFS "-DATL_OS_Linux -DATL_ARCH_Core2Duo -DATL_CPUMHZ=1500 -DATL_SSE3 -DATL_SSE2 -DATL_SSE1 -DATL_USE64BITS -DATL_GAS_x8664"
#define ATL_DKCFLAGS "-fomit-frame-pointer -mfpmath=sse -msse3 -O2 -fPIC -m64"
#define ATL_DKC "gcc"
#define ATL_SKCFLAGS "-fomit-frame-pointer -mfpmath=sse -msse3 -O2 -fPIC -m64"
#define ATL_SKC "gcc"
#define ATL_DMCFLAGS "-fomit-frame-pointer -mfpmath=sse -msse3 -O2 -fPIC -m64"
#define ATL_DMC "gcc"
#define ATL_SMCFLAGS "-fomit-frame-pointer -mfpmath=sse -msse3 -O2 -fPIC -m64"
#define ATL_SMC "gcc"
#define ATL_ICCFLAGS "-DL2SIZE=4194304 -I/home/cannam/ATLAS/build/include -I/home/cannam/ATLAS/build/..//include -I/home/cannam/ATLAS/build/..//include/contrib -DAdd__ -DF77_INTEGER=int -DStringSunStyle -DATL_OS_Linux -DATL_ARCH_Core2Duo -DATL_CPUMHZ=1500 -DATL_SSE3 -DATL_SSE2 -DATL_SSE1 -DATL_USE64BITS -DATL_GAS_x8664 -DPentiumCPS=1000 -fomit-frame-pointer -mfpmath=sse -msse3 -O2 -fPIC -m64"
#define ATL_ICC "gcc-4.2"
#define ATL_F77FLAGS "-O -fPIC -m64"
#define ATL_F77 "g77"
#define ATL_DKCVERS "gcc (GCC) 4.1.3 20070929 (prerelease) (Ubuntu 4.1.2-16ubuntu2)"
#define ATL_SKCVERS "gcc (GCC) 4.1.3 20070929 (prerelease) (Ubuntu 4.1.2-16ubuntu2)"
#define ATL_DMCVERS "gcc (GCC) 4.1.3 20070929 (prerelease) (Ubuntu 4.1.2-16ubuntu2)"
#define ATL_SMCVERS "gcc (GCC) 4.1.3 20070929 (prerelease) (Ubuntu 4.1.2-16ubuntu2)"
#define ATL_ICCVERS "gcc-4.2 (GCC) 4.2.1 (Ubuntu 4.2.1-5ubuntu4)"
#define ATL_F77VERS "GNU Fortran (GCC) 3.4.6 (Ubuntu 3.4.6-6ubuntu2)"
#define ATL_SYSINFO "Linux yves-laptop 2.6.22-14-generic #1 SMP Thu Jan 31 23:33:13 UTC 2008 x86_64 GNU/Linux"
#define ATL_DATE    "Wed Feb 13 11:25:06 GMT 2008"
#define ATL_UNAM    "cannam"
#define ATL_VERS    "3.8.0"

#endif
