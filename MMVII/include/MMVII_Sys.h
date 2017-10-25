#ifndef  _MMVII_Sys_H_
#define  _MMVII_Sys_H_

// Use enum were it works are  they are "better" C++
// Use macro when required (TheSYS==eSYS::Linux) do not work in #if

#define MMVII_SYS_L 1  // Linux
#define MMVII_SYS_A 123  // Apple  , Evil's number ;-)
#define MMVII_SYS_W 666  // Window , vil's number in octal, some system like to it hard  ...

enum class eSYS
{
    Linux=MMVII_SYS_L,
    MacOs=MMVII_SYS_A,
    Windows=MMVII_SYS_W
};

#ifdef __linux__
#include <unistd.h>
const eSYS TheSYS = eSYS::Linux;
#define THE_MACRO_MMVII_SYS MMVII_SYS_L
#endif

#ifdef _WIN32
const eSYS TheSYS = eSYS::Windows;
#define THE_MACRO_MMVII_SYS MMVII_SYS_W
#endif

#ifdef __APPLE__
const eSYS TheSYS = eSYS::MacOs;
#define THE_MACRO_MMVII_SYS MMVII_SYS_A
#endif

int mmvii_NbProcSys();
int mmvii_GetPId();
extern const std::string TheMMVII_SysName ;



#endif  //  _MMVII_Sys_H_
