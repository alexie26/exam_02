
// Assignment name  : search_and_replace
// Expected files   : search_and_replace.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------

// Write a program called search_and_replace that takes 3 arguments, the first
// arguments is a string in which to replace a letter (2nd argument) by
// another one (3rd argument).

// If the number of arguments is not 3, just display a newline.

// If the second argument is not contained in the first one (the string)
// then the program simply rewrites the string followed by a newline.

// Examples:
// $>./search_and_replace "Papache est un sabre" "a" "o"
// Popoche est un sobre
// $>./search_and_replace "zaz" "art" "zul" | cat -e
// $
// $>./search_and_replace "zaz" "r" "u" | cat -e
// zaz$
// $>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
// $
// $>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
// ZaZ eT David aiME le METal.$
// $>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
// eNcOre Un ExEmPle Pas Facile a Ecrire $

#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, sizeof(char));
}

void search_replace(char *str, char search, char replace)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == search)
			ft_putchar(replace);
		else
			ft_putchar(str[i]);
		i++;
	}
}
int main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][1] == '\0' && argv[3][1] == '\0')
				search_replace(argv[1], argv[2][0], argv[3][0]);	
	}
	write(1, "\n", 1);
	return (0);
}