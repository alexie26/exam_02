// Assignment name  : ft_itoa
// Expected files   : ft_itoa.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes an int and converts it to a null-terminated string.
// The function returns the result in a char array that you must allocate.

// Your function must be declared as follows:

#include <stdlib.h>

static char	*ft_char(char *s, unsigned int num, long int len)
{
	while (num > 0)
	{
		s[len--] = 48 + (num % 10);
		num = num / 10;
	}
	return (s);
}

static long int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char			*s;
	long int		len;
	unsigned int	num;
	int				sign;

	sign = 1;
	len = ft_len(nbr);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!(s))
		return (0);
	s[len--] = '\0';
	if (nbr == 0)
		s[0] = '0';
	if (nbr < 0)
	{
		sign *= -1;
		num = -nbr;
		s[0] = '-';
	}
	else
		num = nbr;
	s = ft_char(s, num, len);
	return (s);
}