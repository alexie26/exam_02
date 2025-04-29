// Assignment name  : camel_to_snake
// Expected files   : camel_to_snake.c
// Allowed functions: malloc, free, realloc, write
// --------------------------------------------------------------------------------

// Write a program that takes a single string in lowerCamelCase format
// and converts it into a string in snake_case format.

// A lowerCamelCase string is a string where each word begins with a capital letter
// except for the first one.

// A snake_case string is a string where each word is in lower case, separated by
// an underscore "_".

// Examples:
// $>./camel_to_snake "hereIsACamelCaseWord"
// here_is_a_camel_case_word
// $>./camel_to_snake "helloWorld" | cat -e
// hello_world$
// $>./camel_to_snake | cat -e
// $

#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;
	char c;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				{
					c = argv[1][i] + 32;
					write(1, "_", 1);
					write(1, &c, 1);
				}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// char up_to_low(char c)
// {
// 	if (c >= 'A' && c <= 'Z')
// 	{
// 		c += 32;
// 	}
// 	return (c);
// }


// int main (int argc, char **argv)
// {
// 	int i = 0;
// 	char str[7000];
// 	int snake = 0;

// 	if (argc == 2)
// 	{
// 		while (argv[1][i]){
// 			if (argv[1][i] <= 'Z' && argv[1][i] >= 'A')
// 			{
// 				str[snake] = '_';
// 				snake++;
// 				str[snake] = up_to_low(argv[1][i]);
// 				snake++;
// 				i++;
// 			}
// 			str[snake] = argv[1][i];
// 			snake++;
// 			i++;
// 		}
// 	}
// 	i = 0;
// 	str[snake] = '\0';
// 	while(str[i])
// 	{
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// }