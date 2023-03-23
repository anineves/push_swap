#include "push_swap.h"

static int	ft_check_int(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_atol(argv[i]) > 2147483647 || ft_atol(argv[i]) < -2147483648)
			return (0);
		i++;
	}
	return (1);
}

static int	ft_check_duplicate(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
static int	ft_check_digit(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '-')
				j++;
			if (!ft_isdigit(argv[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_verific(char **argv)
{
	if (ft_check_digit(argv) && ft_check_duplicate(argv) && ft_check_int(argv))
		return (1);
	return (0);
}
