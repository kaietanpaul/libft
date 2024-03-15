#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	new_size;
	int	i;
	int	j;

	new_size = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	j = ft_strlen(s1);
	ptr = malloc(new_size);
	if (ptr)
	{
		while (i < j)
		{
			ptr[i] = s1[i];
			i++;
		}
		i = 0;
		while (i < ft_strlen(s2))
		{
			ptr[j] = s2[i];
			j++;
			i++;
		}
	}
	else
		return (NULL);
	return (ptr);
}