#include "../lib/header.h"

FILE *find_name_file(void)
{
	FILE	*file;
	
	file = fopen("file/french/random_world.txt", "r"); //penser a close le fichier
	return (file);
}