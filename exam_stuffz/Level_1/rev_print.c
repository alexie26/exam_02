// Assignment name  : rev_print
// Expected files   : rev_print.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string, and displays the string in reverse
// followed by a newline.

// If the number of parameters is not 1, the program displays a newline.

// Examples:

// $> ./rev_print "zaz" | cat -e
// zaz$
// $> ./rev_print "dub0 a POIL" | cat -e
// LIOP a 0bud$
// $> ./rev_print | cat -e
// $

#include <unistd.h>

int main (int argc, char **argv) //argc => Argument count; argv == Argument Vector: array of strings
{
	if (argc == 2) //check if theres a argument
	{
		int i = 0;
		while (argv[1][i])
			i++; 
		while (i--)
			write(1, &argv[1][i], 1);
	}
	write (1, "\n", 1);
}

// int main (int argc, char **argv)
// {
// 	int i;

// 	i = 0;
// 	if (argc == 2)
// 	{
// 		while (argv[1][i])
// 			i++;
// 		while (i--)
// 			write(1, &argv[1][i], 1);
// 	}
// 	write(1, "\n", 1);
// }
