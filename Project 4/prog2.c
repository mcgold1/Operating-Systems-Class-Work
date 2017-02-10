#include "syscall.h"

int
main()
{
    OpenFileId output = ConsoleOutput;
    
	char* str = "Executing user program: prog2";
    
    int i, j;
    for (i = 0; i < 3; ++i) {
        Write(str, 29, output);
        for (j = 0; j < 5000; ++j);
    }
	
	Exit(0);
}
