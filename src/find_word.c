#include "../lib/header.h"
#include <stdio.h>
#include <stdlib.h>

char	*cleanWord(game_t *game)
{
	return (NULL);
}

char	*findWord(game_t *game) //trouver le neme mot
{
	int		r;
	int		line;
	char	*word;
	size_t	size;

	size = 0;
	word = NULL;
	line = 1;
	srand(time(NULL));
	r = rand() % 399;
	while (r == 0)
	{
		srand(time(NULL));
		r = rand() % 399;
	}
	while (line != r + 1)
	{
		getline(&word, &size, game->file);
		line++;
	}
	return (word);
}
