
// Assignment name  : do_op
// Expected files   : *.c, *.h
// Allowed functions: atoi, printf, write
// --------------------------------------------------------------------------------

// Write a program that takes three strings:
// - The first and the third one are representations of base-10 signed integers
//   that fit in an int.
// - The second one is an arithmetic operator chosen from: + - * / %

// The program must display the result of the requested arithmetic operation,
// followed by a newline. If the number of parameters is not 3, the program
// just displays a newline.

// You can assume the string have no mistakes or extraneous characters. Negative
// numbers, in input or output, will have one and only one leading '-'. The
// result of the operation fits in an int.

// Examples:

// $> ./do_op "123" "*" 456 | cat -e
// 56088$
// $> ./do_op "9828" "/" 234 | cat -e
// 42$
// $> ./do_op "1" "+" "-43" | cat -e
// -42$
// $> ./do_op | cat -e
// $

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

static void ft_do_op(char *operand1, char operator, char *operand2)
{
	int first;
	int second;
	int result;

	result = 0;
	first = atoi(operand1);
	second = atoi(operand2);
	if (operator == '+')
			result = first + second;
	else if (operator == '-')
			result = first - second;
	else if (operator == '*')
			result = first * second;
	else if (operator == '/')
			result = first / second;
	else if (operator == '%')
			result = first % second;
	printf("%d", result);
}

int main (int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][1] == '\0')
				ft_do_op(argv[1], argv[2][0], argv[3]);
	}
	printf("\n");
	return (0);
}
