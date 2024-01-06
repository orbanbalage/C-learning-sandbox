#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	/*
	char **arr;
	arr = malloc(3 * sizeof(char));
	*arr = "ab";
	printf("*arr =%s\n", *arr);
	//WORKS!
	*/

	//char	**arr = "ab";
	//error: incompatible pointer types initializing 'char **' 
	//with an expression of type 'char[3]'

	char **arr;
	arr = malloc(2*5 * sizeof(char));
	arr[1][2] = "abc";
	//error: incompatible pointer to integer conversion 
	//assigning to 'char' from 'char[4]'

	free(arr);
	return (0);
}
