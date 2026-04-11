#include "../../lib/header.h"

void	print_struct(game_t *game)
{
	printf("\n\nStruct:\nWord: %s\nmy_word: %s\nletter: %s\nnb_attempts: %d\nalive: %d\nFILE: %p\npath: %s\n", game->word, game->my_word, game->letter, game->nb_attempts, game->alive, game->file, game->path);
}

char	*read_input(void)
{
	char	*buffer;
	size_t	size;
	int		bytes;

	buffer = NULL;
	if (getline(&buffer, &size, stdin) == -1)
		return (NULL);
	return (buffer);
}

char	reel_letter(char *str)
{
	char	c;

	c = str[0];
	if (str[0] < 97)
		c = str[0] + 32;
	free(str);
	return (c);
}

int	letter_already_use(char *str, char c) //si existe dans str, return la position
{
	if (str == NULL)
		return (84); //Attention si str == NULL, return 84///// pour letter au debut
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == c)
			return (i);
	}
	return (-1); //n'existe pas dans str
}

void	letter_to_word(game_t *game, char c)
{
	if (letter_already_use(game->word, c) != -1)
	{
		//ici la lettre existe
		for (int i = 0; game->word[i] != '\0'; i++)
		{
			if (game->word[i] == c)
			{
				game->my_word[i] = c;
			}
		}
	} else {
		//ici la lettre n'existe pas
		// printf("NO LETTER\n");
		game->nb_attempts++;
	}
}

/*
[X] Check si letter est bon
[?] Check si letter est deja utilise
[X] Check si letter existe dans le mot
[X] Afficher TOUTES les lettres dans le mot
Probleme avec les mots qui ont des espaces (+ caractères non alphanumériques)
*/
void	add_letter(game_t *game, char *str)
{
	char	c;

	printf("Word: %s\n", game->word);
	if (str[2] != '\0' && str[1] != '\n' && str[0] != '\n') //check 1 entree possible (str[0])
		return;
	if (str[0] < 65 || str[0] > 90 && str[0] < 97 || str[0] > 122) //check que str[0] == lettre de l'alphanet
		return;
	c = reel_letter(str);
	if (letter_already_use(game->letter, c) == -1) //lettre deja utilise, deja mis par le passe // crash au debut, letter == NULL a regler
		return;
	// if (letterAlreadyUse(game->my_word, c) == -1)
	// 	exit(0);
	letter_to_word(game, c);
	return;
}

int	check_cmd(game_t *game, char *str)
{
	if (str == NULL || game->my_word == NULL || game->word == NULL)
		return (1);
	if (strncmp(str, "exit", 4) == 0)
		return (1);
	add_letter(game, str);
	return (0);
}

int	core(game_t *game)
{
	char	*str;

	while (game->alive)
	{
		clear();
		game_page();
		// printf("%s\n", game->word);
		if (game->nb_attempts >= 8)
			game->alive = 0;
		if (ft_strcmp(game->my_word, game->word) == 0) //gagner
			exit(45); //trouver un autre mot
		print_game(game);
		str = read_input();
		if (check_cmd(game, str) == 1) //if error
			return (0);
	}
	//check game, voir ce qui existe ou non, initier ce qui n'existe pas 
	// et lancer le jeu
	return (0);
}