#include <stdio.h>

int	main(int argc, char *argv[])
{
	char *argd[3] = {"d...", "finish", "1234"};  //ARGD is an ARRAY of 3 POINTERS to CHAR
	char arge[][6] = {"e...", "finish", "1234"}; //[4]][6]  //ARGE is an ARRAY! .
	printf("argc = %d\n\n", argc);

	printf("*argv[0] = %c\n", *argv[0]);
	printf("argv[0] = %p\n", argv[0]);
	printf("argv[0] = %s\n", argv[0]);
	printf("argv = %p\n\n", argv);

	printf("*argd[0] = %c\n", *argd[0]);
	//printf("*argd[0] = %s\n", *argd[0]); //dereferenced pointer is CHAR not STRING / CHAR *...
	//printf("*argd[0] = %p\n", *argd[0]); //dereferenced pointer is CHAR not VOID *...
	printf("argd[0] = %p\n", argd[0]);
	printf("argd[0] = %s\n", argd[0]);
	printf("*argd = %s\n", *argd);
	printf("argd = %p\n\n", argd);

	printf("*arge[0] = %c\n", *arge[0]);
	//printf("*arge[0] = %s\n", *arge[0]); //dereferenced pointer is CHAR not STRING / CHAR *...
	//printf("*arge[0] = %p\n", *arge[0]); //dereferenced pointer is CHAR not VOID *...
	printf("arge[0] = %p\n", arge[0]);
	printf("arge[0] = %s\n", arge[0]);
	printf("*arge = %s\n", *arge);
	printf("arge = %p\n\n", arge);
	
	printf("*argv[1] = %c\n", *argv[1]);
	printf("argv[1] = %s\n", argv[1]);
	
	printf("*argv[2] = %c\n", *argv[2]);
	printf("argv[2] = %s\n", argv[2]);
}
