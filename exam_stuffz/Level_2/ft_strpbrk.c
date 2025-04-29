// Assignment name	: ft_strpbrk
// Expected files	: ft_strpbrk.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strpbrk
// (man strpbrk).

// The function should be prototyped as follows:

#include <stddef.h>

static *ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
				return ((char *)s);
		s++;
	}
	return (NULL);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (ft_strchr(s2, *s1))
				return ((char *)s1);
		s1++;
	}
	return (NULL);
}

