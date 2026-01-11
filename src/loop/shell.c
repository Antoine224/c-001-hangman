#include "../../lib/header.h"

int	getNbr(void)
{
	char	buffer[80];
	int		choice;
	int		i;

	i = 0;
	if (read(0, &buffer, 79) == EOF)
		return (-1);
	while (ft_isdigit(buffer[i]))
		i++;
	buffer[i] = '\0';
	if (i == 0 || i > 1)
		return (-1);
	return (ft_atoi(buffer));
}

int	loop(game_t *game)
{
	int	choice;

	while (1)
	{
		clear();
		firstScrpit();
		choice = getNbr();
		if (choice > 0 && choice < 4)
			break;
	}
	if (choice == 1)
		return (0);
	if (choice == 2)
		return (0);
	if (choice == 3)
		return (0);
	return (1);
}
