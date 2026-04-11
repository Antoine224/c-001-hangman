#include "../lib/header.h"

game_t	*initStruct(void)
{
	game_t *game;

	game = malloc(sizeof(game_t));
	if (game == NULL)
		return (NULL);
	game->nb_attempts = 0;
	game->alive = 1;
	return (game);
}

int	init_game(game_t *game)
{
	char	*nameFile;
	int		return_value;

	game->file = find_name_file();
	if (game->file == NULL)
		return (error("Error with file\n"));
	game->word = find_word(game);
	game->my_word = myWord(game);
	return_value = loop(game);
	//clear game
	return (return_value);
}

int	first_game(void)
{
	game_t *game;

	game = initStruct();
	if (game == NULL)
		return (error("Error with struct game_t\n"));
	return (init_game(game));
}
