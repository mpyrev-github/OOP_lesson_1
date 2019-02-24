#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include "dll.h"

int _tmain(int argc, _TCHAR* argv[])
{
	name();
	group();
	system("PAUSE");
	return 0;
}
