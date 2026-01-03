#ifndef STRUCT_H
# define STRUCT_H

#include <stdbool.h>
#include <stdio.h>

typedef struct game {
	char	*word;
	char	*letter;
	int		nb_attempts; //8 max
	bool	alive;
	FILE	*file;
} game_t;

#endif
