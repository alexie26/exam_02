// Assignment name  : wdmatch
// Expected files   : wdmatch.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and checks whether it's possible to
// write the first string with characters from the second string,
	// while respecting
// the order in which these characters appear in the second string.

// If it's possible, the program displays the string, followed by a \n,
	// otherwise
// it simply displays a \n.

// If the number of arguments is not 2, the program displays a \n.

// Examples:

// $>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
// faya$
// $>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
// $
// $>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat
	// -e
// quarante deux$
// $>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
// $
// $>./wdmatch | cat -e
// $

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str, 1);
	i++;
}

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_wdmatch(char *first, char *second)
{
	int	ifirst;
	int	isecond;

	ifirst = 0;
	isecond = 0;
	while (second[isecond] != '\0')
	{
		if (first[ifirst] == second[isecond])
			ifirst++;
		isecond++;
	}
	if (ifirst == ft_strlen(first))
				ft_putstr(first);
}

int main(int argc, char **argv)
{
	if (argc == 3)
			ft_wdmatch(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
