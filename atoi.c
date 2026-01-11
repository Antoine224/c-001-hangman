#include "header.h"

int	ft_atoi(const char	*str)
{
	long int	nb;
	int			i;
	int			is_neg;

	if (str == NULL)
		return (0);
	i = 0;
	nb = 0;
	is_neg = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		is_neg = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		nb *= 10;
		nb += (str[i] - '0');
		i++;
	}
	return (nb * is_neg);
}
