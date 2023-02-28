#include "push_swap.h"

int	ft_atol(const char *str)
{
	long			res;
	int			signal;
	int			i;

	res = 0;
	signal = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = ((res * 10) + (str[i] - '0'));
		i++;
	}
	return (res * signal);
}


int	ft_fill( char *n)
{
	long nb;
	
	nb = ft_atol(n);
	if (nb > 2147483647 || nb < -2147483648)
		return(0);
	
	return (nb);
}

