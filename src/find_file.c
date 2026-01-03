#include "../lib/header.h"

FILE *findNameFile(void)
{
	FILE	*file;
	
	file = fopen("file/french/random_world.txt", "r"); //penser a close le fichier
	return (file);
}