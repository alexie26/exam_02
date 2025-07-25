// Assignment name  : print_hex
// Expected files   : print_hex.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a positive (or zero) number expressed in base 10,
// and displays it in base 16 (lowercase letters) followed by a newline.

// If the number of parameters is not 1, the program displays a newline.

// Examples:

// $> ./print_hex "10" | cat -e
// a$
// $> ./print_hex "255" | cat -e
// ff$
// $> ./print_hex "5156454" | cat -e
// 4eae66$
// $> ./print_hex | cat -e
// $

#include <unistd.h>

void print_char(int c, int *count)
{
	int check;

	if (*count == -1)
		return ;
	check = write(1, &c, 1);
	if (check == -1)
	{
		*count = -1;
		return ;
	}
	else
		*count += check;
}


int	print_hex(unsigned int num, int *count)
{
	if (num >= 16)
	{
		print_hex((num / 16), count);
	}
	if (num % 16 < 10)
		print_char((num % 16) + '0', count);
	else
		print_char((num % 16) - 10 + 'a', count);
}
