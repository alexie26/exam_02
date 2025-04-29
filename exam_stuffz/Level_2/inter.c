// Assignment name  : inter
// Expected files   : inter.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and displays, without doubles, the
// characters that appear in both strings, in the order they appear in the first
// one.

// The display will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.

// Examples:

// $>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// padinto$
// $>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6ewg4$
// $>./inter "rien" "cette phrase ne cache rien" | cat -e
// rien$
// $>./inter | cat -e
// $

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_doublon(char *str, char c, int pos)
{
	int	idx;

	idx = 0;
	while (idx < pos)
	{
		if (str[idx] == c)
			return (0);
		idx++;
	}
	return (1);
}

void	inter(char *first, char *second)
{
	int	first_idx;
	int	second_idx;

	first_idx = 0;
	while (first[first_idx] != '\0')
	{
		second_idx = 0;
		while (second[second_idx] != '\0')
		{
			if (first[first_idx] == second[second_idx])
			{
				if (check_doublon(first, first[first_idx], first_idx) == 1)
				{
					write(1, &first[first_idx], 1);
					break ;
				}
			}
			second_idx++;
		}
		first_idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
