#include <stdlib.h>

// int	ft_strlen(char *str)
// {
// 	int	i = 0;

// 	while (str[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// void	ft_bzero(void *s, size_t c)
// {
// 	size_t	i;
// 	char	*str;

// 	str = s;
// 	i = 0;
// 	while (i < c)
// 	{
// 		str[i] = 0;
// 		i++;
// 	}
// }

// void	*ft_calloc(size_t nitems, size_t size)
// {
// 	void	*array;

// 	array = (void *)malloc(nitems * size);
// 	if (array == NULL)
// 	{
// 		return (NULL);
// 	}
// 	ft_bzero(array, (nitems * size));
// 	return (array);
// }

// static int	word_count(const char *str, const char c)
// {
// 	int count;
// 	int x;

// 	count = 0;
// 	x = 0;
// 	while (*str)
// 	{
// 		if (*str != c && x == 0)
// 		{
// 			x = 1;
// 			count++;
// 		}
// 		else if (*str == c)
// 			x = 0;
// 		str++;
// 	}
// 	return (count);
// }

// static char *ft_fillword(const char *str, int start, int end)
// {
// 	char *word;
// 	int	i;

// 	i = 0;
// 	word = malloc((end - start + 1) * sizeof(char));
// 	if (!word)
// 		return (NULL);
// 	while (start < end)
// 	{
// 		word[i] = str[start];
// 		i++;
// 		start++;
// 	}
// 	word[i] = 0;
// 	return (word);
// }
// static void *ft_free(char **str, int c)
// {
// 	int i;
// 	i = 0;
// 	while (i < c)
// 	{
// 		free(str[i]);
// 		i++;
// 	}
// 	free(str);
// 	return (NULL);
// }

// static void init(size_t *i, int *j, int *s_word)
// {
// 	*i = 0;
// 	*j = 0;
// 	*s_word = -1;
// }

#include <stdlib.h>

char    **ft_split(char *str)
{
	int	i;
	int	j;
	int	k;
	char **split;

	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i += 1;
	while (str[i])
	{
		j = 0;
		if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			split[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] != '\n')
			i += 1;
		split[k][j] = '\0';
		k += 1;
	}
	split[k] = NULL;
	return (split);
}
