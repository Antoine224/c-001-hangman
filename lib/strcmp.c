#include "header.h"

/*
•  0, if the s1 and s2 are equal;

•  a negative value if s1 is less than s2;

•  a positive value if s1 is greater than s2.

*/
int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	for (i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] > str2[i])
			return (2);
		if (str1[i] < str2[i])
			return (-2);
	}
	if (str2[i] == '\0')
		return (0);
	else
		return (-2);
}
