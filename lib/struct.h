#ifndef STRUCT_H
# define STRUCT_H

#include <stdbool.h>

typedef struct game {
	char	*word;
	char	*letter;
	int		nb_attempts;
	bool	game;
} game_t;

#endif
