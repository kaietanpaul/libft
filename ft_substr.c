#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*ptr;
	size_t	i;
	size_t	j;

	s_len = ft_strlen(s);
	i = start;
	j = 0;
	ptr = malloc(s_len - start);
	if (ptr)
	{
		while (j < len && i < s_len)
		{
			ptr[j] = s[i];
			i++;
			j++;
		}
		ptr[j] = '\0';
	}
	else
		return (NULL);
	return (ptr);
}