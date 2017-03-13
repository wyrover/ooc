#include "hello.h"

#include <SDKDDKVer.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>
#include <crtdbg.h>



int main()
{
#ifdef DEBUG
    _CrtSetDbgFlag(_CRTDBG_REPORT_FLAG | _CRTDBG_LEAK_CHECK_DF);
#endif

	printf("hello\n");
  

    system("pause");
    return 0;
}

