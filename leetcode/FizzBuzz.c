#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	int i = 1;
	char word[9];
	while (i <= 100)
	{
		if (i % 3 == 0)
			strcat(word, "Fizz");
		if (i % 5 == 0)
			strcat(word, "Buzz");
		if (strlen(word))
			printf("%s\n", word);
		else
			printf("%d\n", i);
		i++;
		word[0] = '\0';
	}	
}
