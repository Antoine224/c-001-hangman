#include "header.h"

size_t	ft_strlen(char *str)
{
	size_t	size;
	if (str == NULL)
		return (0);
	while (str[size] != '\0')
		size++;
	return (size);
}