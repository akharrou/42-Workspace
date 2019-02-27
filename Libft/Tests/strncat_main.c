
#include "../ft_strncat.c"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		main(int ac, char *av[])
{
	if (ac != 4)
	{
		printf("Usage: ./program s1 s2 n\n");
		return (1);
	}

	// printf("%s\n",
	// strncat((char *restrict)av[1], (const char *restrict)av[2], atoi(av[3])));

	printf("%s\n", ft_strncat((char *)av[1], (const char *)av[2], atoi(av[3])));

	return (0);
}