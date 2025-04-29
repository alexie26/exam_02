// Assignment name  : ft_rrange
// Expected files   : ft_rrange.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write the following function:

// int     *ft_rrange(int start, int end);

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at end and end at start (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 3, 2 and 1
// - With (-1, 2) you will return an array containing 2, 1, 0 and -1.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing -3, -2, -1 and 0.

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int *range;
	int i;
	int size;

	if (start > end)
		size = (start - end) + 1;
	else
		size = (end - start) + 1;

	range = (int *)malloc(sizeof(int) * size);
	if (!range)
		return (NULL);

	 i = 0;
	 while (i < size)
	 {
		range[i] = end;
		end -= (start > end) ? (-1) : (1);
		i++;
	 }
	 return (range);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	*tab;
// 	int	idx;
// 	int	start;
// 	int	end;
// 	int	size;

// 	idx = 0;
// 	start = -5;
// 	end = 5;
// 	tab = ft_rrange(start, end);
// 	size = 10;
// 	while (idx < size)
// 	{
// 		printf(" [%i] ", tab[idx]);
// 		idx++;
// 	}
// 	printf("\n");
// }