#include <stdlib.h>
#include <stdio.h>

int main()
{
	char *p = NULL; //nullptr = C++11
	//int *a;
	int *ptr = 0x0;
	
	*p = "abc123"; //segfault
	//*a = 12;	//bus error
	printf("%f\n", *ptr);	//segfault
	return 0 ;
}
