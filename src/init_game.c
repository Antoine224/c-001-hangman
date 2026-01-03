#include "../lib/header.h"

game_t *init_struct(void)
{
	game_t *game;

	game = malloc(sizeof(game_t));
	if (game == NULL)
		return (NULL);
	game->nb_attempts = 0;
	game->alive = 1;
	return (game);
}

int coreLogic(void)
{
	char	*nameFile;
	game_t	*game;

	game = init_struct();
	if (game == NULL)
		return (-1);
	game->file = findNameFile();
	if (game->file == NULL)
		return (error("Error with file\n"));
	game->word = findWord(game);
	return (0);
}