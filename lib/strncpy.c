#include "header.h"

char	*ft_strncpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (dst == NULL || src == NULL)
		return (NULL);
	i = 0;
	while (i != size)
	{
		if (src[i] == '\0')
		{
			dst[i] = '\0';
			return (dst);
		}
		dst[i] = src[i];
		i++;
	}
	dst[i - 1] = '\0';
	return (dst);
}
