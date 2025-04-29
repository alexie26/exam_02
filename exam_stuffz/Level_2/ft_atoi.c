// Assignment name  : ft_atoi
// Expected files   : ft_atoi.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function, see the man.

// Your function must be declared as follows:

static int	ft_isdigit(char c)
{
	return (('0' <= c) && (c <= '9'));
}

int	ft_atoi(const char *str)
{
	long	i;
	long	result;
	int		count;

	i = 0;
	result = 0;
	count = 0;
	while (str[i] != '\0' && (str[i] == 32 || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] != '\0' && str[i] == '-')
		{
			count = -1;
		}
		i++;
	}
	while (str[i] != '\0' && ft_isdigit(str[i]))
		result = (result * 10) + (str[i++] - '0');
	if (count == -1)
		return (result * -1);
	return (result);
}
