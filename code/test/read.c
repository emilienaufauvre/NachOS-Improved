#include "syscall.h"


int main()
{
	char alphabet[26] ;

	OpenFileId id = Open("test/putchar.c", 'w') ;
	Read(alphabet, 26, id)

	PutString(alphabet) ;
}
