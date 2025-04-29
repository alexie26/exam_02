
#include <stdio.h>
#include <stdlib.h>

static void ft_prime(int number)
{
	static int	prime;

	prime = 0x2;
	if (number == 0x1)
	{
		printf("1");
		return ;
	}
	while (prime <= number)
	{
		if ((number % prime) == 0x0)
		{
			printf("%d", prime);
			if (number != prime)
				printf("*");
			number /= prime;
		}
		else
			prime++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 0x2)
		ft_prime(atoi(argv[0x1]));
	printf("\n");
	return (0);
}