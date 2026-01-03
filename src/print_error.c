#include "../lib/header.h"

int	error(char *str)
{
	if (str != NULL)
	{
		ft_putstr(str);
		return (1);
	}
	ft_putstr("Error\n");
	return (1);
}