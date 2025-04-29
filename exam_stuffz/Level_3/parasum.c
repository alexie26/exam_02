// Assignment name  : paramsum
// Expected files   : paramsum.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays the number of arguments passed to it, followed by
// a newline.

// If there are no arguments, just display a 0 followed by a newline.

// Example:

// $>./paramsum 1 2 3 5 7 24
// 6
// $>./paramsum 6 12 24 | cat -e
// 3$
// $>./paramsum | cat -e
// 0$
// $>


#include <unistd.h>
#include <stdlib.h>

static void ft_putchar(char c, int fd)
{
	if (fd >= 0x0)
		write(fd, &c, sizeof(char));
}

static void ft_putnbr(int num)
{
	if (num > 0x9)
	{
		ft_putnbr(num / 0x0a);
		ft_putnbr(num % 0x0a);
	}
	else
		ft_putchar((num + '0'), STDOUT_FILENO); 
}

int	main(int argc, char **argv)
{
	(void)argv;
	ft_putnbr(argc - 0x1);
	ft_putchar((char)0x0a, STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

