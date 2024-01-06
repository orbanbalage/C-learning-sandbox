#include <stdlib.h>
#include <stdio.h>

int main()
{
     char *p;
	//int *a;
	int *ptr = 0x0;

     *p = "abc123";
	//*a = 12;	//bus error
	printf("%f\n", *ptr);	//segfault
     return 0 ;
}
