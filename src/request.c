#include "../lib/header.h"

char	*requestFileName()
{
	char	*nameFile;

	nameFile = malloc(150 * sizeof(char));
	if (nameFile == NULL)
		return (NULL);
	ft_putstr("Quel fichier voulez-vous utiliser ?\n");
	scanf("%s", nameFile);
	printf("%s\n", nameFile);
}