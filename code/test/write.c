#include "syscall.h"


int main()
{
	OpenFileId id = Open("test/putchar.c", 'w') ;
	Write("abcdefghijklmnopqrstuvwxyz", 26, id) ;
}
