// Assignment name  : rostring
// Expected files   : rostring.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays this string after rotating it
// one word to the left.

// Thus, the first word becomes the last, and others stay in the same order.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string.

// Words will be separated by only one space in the output.

// If there's less than one argument, the program displays \n.

// Example:

// $>./rostring "abc   " | cat -e
// abc$
// $>
// $>./rostring "Que la      lumiere soit et la lumiere fut"
// la lumiere soit et la lumiere fut Que
// $>
// $>./rostring "     AkjhZ zLKIJz , 23y"
// zLKIJz , 23y AkjhZ
// $>
// $>./rostring "first" "2" "11000000"
// first
// $>
// $>./rostring | cat -e
// $
// $>

#include <unistd.h>

int	ft_blank(char c)
{
	return(c == ' ' || c == '\t');
}

void ft_rostring(char *s)
{
	int i = 0;
	int first_word_len = 0;

	while (s[i])
	{
		while(ft_blank(s[i]))
			i++;
		if (s[i] && !ft_blank(s[i]))
		{
			if (first_word_len == 0)
				while (s[i] && !ft_blank(s[i++]))
				first_word_len++;
			else
			{
				while (s[i] && !ft_blank(s[i]) && !ft_blank(s[i]) && write(1, &s[i++], 1));
				write(1, " ", 1);
			}
		}
	}
	i = 0;
	while (ft_blank(s[i]));
		i++;
	while (first_word_len--)
		write(1, &s[i++], 1);
}

int	main (int argc, char **argv)
{
	if (argc > 1 && *argv[1])
		ft_rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}
