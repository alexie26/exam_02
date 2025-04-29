// Assignment name  : rev_wstr
// Expected files   : rev_wstr.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string as a parameter, and prints its words in
// reverse order.

// A "word" is a part of the string bounded by spaces and/or tabs, or the
// begin/end of the string.

// If the number of parameters is different from 1, the program will display
// '\n'.

// // In the parameters that are going to be tested,
// 	there won't be any "additional"
// // spaces (meaning that there won't be additionnal spaces at the beginning or at
// // the end of the string,
// 	and words will always be separated by exactly one space).

// Examples:

// $> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat
	// -e
// ironic? it Isn't gatherings. love I But people! hate You$
// $>./rev_wstr "abcdefghijklm"
// abcdefghijklm
// $> ./rev_wstr "Wingardium Leviosa" | cat -e
// Leviosa Wingardium$
// $> ./rev_wstr | cat -e
// $
// $>

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

void	write_word(char *str, int start, int end)
{
	while (start < end)
		ft_putchar(str[start++]);
}

int	main(int argc, char **argv)
{
	int i;
	int end;
	int first_word = 1;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		while (i > 0)
		{
			while (i > 0 && is_space(argv[1][i - 1]))
				i--;
			end = i;
			while (i > 0 && !is_space(argv[1][i - 1]))
				i--;
			if (!first_word)
				ft_putchar(' ');
			write_word(argv[1], i, end);
			first_word = 0;
		}
	}
	write(1, "\n", 1);
	return (0);
}