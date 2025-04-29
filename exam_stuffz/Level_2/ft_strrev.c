
// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:

// char    *ft_strrev(char *str);

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void swap(char *c1, char *c2)
{
	int i;

	i = *c1;
	*c1 = *c2;
	*c2 = i;
}

char *ft_strrev(char *str)
{
	int	i;
	int len;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i < len)
	{
		swap(&str[i], &str[len]);
		i++;
		len--;
	}
	return (str);
}

