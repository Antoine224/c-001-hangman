#ifndef PROTOTYPE_H
# define PROTOTYPE_H

#include <stdio.h>
#include "struct.h"

// cerveau, init la partie
// int		core(game_t *game);

FILE	*find_name_file(void);
char	*find_word(game_t *game);
int		init_game(game_t *game);
int		first_game(void);
int		core(game_t *game);
char	*myWord(game_t *game);

// setup game
int		loop(game_t *game);

// error
int		error(char *str);

// script
//		french
void	first_script(void);
void	invalidChoice(int choice);
void	clear(void);
void	tutoFrench(void);
void	game_page(void);
void	print_game(game_t *game);

// lib
void	ft_putstr(char *str);
void	ft_putchar(char c);
size_t	ft_strlen(char *str);
char	*ft_strncpy(char *dst, const char *src, size_t size);
char	*ft_strdup(char *str);
int		ft_isdigit(int c);
int		ft_atoi(const char	*str);
void	ft_putnbr(int nb);
int		ft_strcmp(char *str1, char *str2);

#endif
