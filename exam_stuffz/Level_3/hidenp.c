// Assignment name  : hidenp
// Expected files   : hidenp.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program named hidenp that takes two strings and displays 1
// followed by a newline if the first string is hidden in the second one,
// otherwise displays 0 followed by a newline.

// Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to
// find each character from s1 in s2, in the same order as they appear in s1.
// Also, the empty string is hidden in any string.

// If the number of parameters is not 2, the program displays a newline.

// Examples :

// $>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
// 1$
// $>./hidenp "abc" "2altrb53c.sse" | cat -e
// 1$
// $>./hidenp "abc" "btarc" | cat -e
// 0$
// $>./hidenp | cat -e
// $
// $>

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

static void	ft_putchar(char c, int fd)
{
	if (fd >= 0x0)
		write(fd, &c, sizeof(char));
}

size_t ft_strlen(char *str)
{
	const char	*last;

	last = str;
	if (!str)
		return (0x0);
	while (*last != '\0')
		last++;
	return (last - str);
}

size_t ft_match(char *first, char *sec)
{
	size_t	idx_first = 0;
	size_t	idx_sec = 0;

	while (sec[idx_sec] != '\0')
	{
		if (first[idx_first] == sec[idx_sec])
			idx_first++;
		idx_sec++;
	}
	return (idx_first);
}

void	hidenp(char *first, char *sec)
{
	size_t	match;

	match = ft_match(first, sec);
	if (match == ft_strlen(first))
		ft_putchar('1', 1);
	else
		ft_putchar('0', 1);
}

int main(int argc, char **argv)
{
	if (argc == 0x3)
		hidenp(argv[0x1], argv[0x2]);
	ft_putchar('\n',  1);
	return (EXIT_SUCCESS);
}
