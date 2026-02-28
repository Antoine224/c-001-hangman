#include "../../lib/header.h"

void	printStruct(game_t *game)
{
	printf("\n\nStruct:\nWord: %s\nmy_word: %s\nletter: %s\nnb_attempts: %d\nalive: %d\nFILE: %p\npath: %s\n", game->word, game->my_word, game->letter, game->nb_attempts, game->alive, game->file, game->path);
}

char	*readInput(void)
{
	char	*buffer;
	size_t	size;
	int		bytes;

	buffer = NULL;
	if (getline(&buffer, &size, stdin) == -1)
		return (NULL);
	return (buffer);
}

char	reelLetter(char *str)
{
	char	c;

	c = str[0];
	if (str[0] < 97)
		c = str[0] + 32;
	free(str);
	return (c);
}

int	letterAlreadyUse(char *str, char c) //si existe dans str, return la position
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == c)
			return (i);
	}
	return (-1); //n'existe pas dans str
}

void	letterToWord(game_t *game, char c)
{
	if (letterAlreadyUse(game->word, c) != 0);
}

/*
[X] Check si letter est bon
[?] Check si letter est deja utilise
[ ] Check si letter existe dans le mot
[ ] Afficher TOUTES les lettres dans le mot
*/
void	addLetter(game_t *game, char *str)
{
	char	c;

	if (str[2] != '\0' && str[1] != '\n' && str[0] != '\n') //check 1 entree possible (str[0])
		return;
	if (str[0] < 65 || str[0] > 90 && str[0] < 97 || str[0] > 122) //check que str[0] == lettre de l'alphanet
		return;
	c = reelLetter(str);
	if (letterAlreadyUse(game->letter, c) != -1) //lettre deja utilise, deja mis par le passe
		return;
	if (letterAlreadyUse(game->my_word, c) != -1)
		return;
	letterToWord(game, c);
	return;
}

int	checkCmd(game_t *game, char *str)
{
	if (str == NULL || game->my_word == NULL || game->word == NULL)
		return (1);
	if (strncmp(str, "exit", 4) == 0)
		return (1);
	addLetter(game, str);
	return (0);
}

int	core(game_t *game)
{
	char	*str;

	clear();
	gamePage();
	while (game->alive)
	{
		if (game->nb_attempts >= 8)
			game->alive = 0;
		printGame(game);
		str = readInput();
		if (checkCmd(game, str) == 1) //if error
			return (0);
	}
	//check game, voir ce qui existe ou non, initier ce qui n'existe pas 
	// et lancer le jeu
	return (0);
}