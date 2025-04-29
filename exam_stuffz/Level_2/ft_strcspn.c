
#include <stddef.h>

static char *strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
				return ((char *)s);
		s++;
	}
	return (NULL);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	const char	*point;

	point = s;
	while(*s)
	{
		if (strchr(reject, *s))
				break;
		s++;
	}
	return (s - point);
}
