#ifndef PROTOTYPE_H
# define PROTOTYPE_H

#include <stdio.h>
#include "struct.h"

// cerveau, init la partie
int		core(game_t *game);

FILE	*findNameFile(void);
char	*findWord(game_t *game);
int		initGame(game_t *game);
int		firstGame(void);

// setup game
int		loop(game_t *game);

// error
int		error(char *str);

// script
//		french
void	firstScrpit(void);
void	invalidChoice(int choice);
void	clear(void);

// lib
void	ft_putstr(char *str);
void	ft_putchar(char c);
size_t	ft_strlen(char *str);
char	*ft_strncpy(char *dst, const char *src, size_t size);
char	*ft_strdup(char *str);
int		ft_isdigit(int c);
int		ft_atoi(const char	*str);

#endif
