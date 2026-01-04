#include "../../lib/header.h"

int	loop(game_t *game)
{
	int	choice;

	clear();
	firstScrpit();
	scanf("%d", &choice);
	if (choice > 3 || choice < 1)
	{
		invalidChoice(choice);
		loop(game);
	}
	return (0);
}