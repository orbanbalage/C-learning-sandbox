#include <stdlib.h>

int	main(void)
{
	char	*str = malloc(4);

	str[0] = 'h';
	str[1] = 'e';
	str[2] = 'y';
	str[3] = '\0';

	free(str);
	return (0);
}
