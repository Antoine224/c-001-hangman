#include "../lib/header.h"
#include <stdio.h>
#include <stdlib.h>

char	*cleanWord(char	*word)
{
	char	*clean_word;

	if (word == NULL)
		return (NULL);
	clean_word = malloc((ft_strlen(word) + 55) * sizeof(char));
	if (clean_word == NULL)
		return (NULL);
	clean_word = ft_strncpy(clean_word, word, ft_strlen(word));
	if (clean_word == NULL)
		return (NULL);
	return (clean_word);
}

char	*findWord(game_t *game)
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
	return (cleanWord(word));
}
