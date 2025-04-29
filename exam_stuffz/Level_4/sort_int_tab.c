// Assignment name  : sort_int_tab
// Expected files   : sort_int_tab.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write the following function:

// void sort_int_tab(int *tab, unsigned int size);

// It must sort (in-place) the 'tab' int array, that contains exactly 'size'
// members, in ascending order.

// Doubles must be preserved.

// Input is always coherent.

// static	void ft_swap(int *a, int *b)
// {
// 	int i;

// 	i = *a;
// 	*a = *b;
// 	*b = i;
// }

// void	sort_int_tab(int *tab, unsigned int size)
// {
// 	unsigned int	i;
// 	unsigned int	j;

// 	j = 0;
// 	if (size <= 1)
// 		return ;
// 	while (j < size)
// 	{
// 		i = 0;
// 		while (i < (size < 1))
// 		{
// 			if (tab[i] > tab[i + 1])
// 					ft_swap(&tab[i], &tab[i + 1]);
// 			i++;
// 		}
// 		j++;
// 	}
// }

void	sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
