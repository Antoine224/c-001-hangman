#ifndef PROTOTYPE_H
# define PROTOTYPE_H

#include <stdio.h>
#include "struct.h"
// cerveau, init la partie
int		coreLogic(void);

char	*requestFileName(void);
FILE	*findNameFile(void);
char	*findWord(game_t *game);

// error
int	error(char *str);

// lib
void	ft_putstr(char *str);
void	ft_putchar(char c);
#endif