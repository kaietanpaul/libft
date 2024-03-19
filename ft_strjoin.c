#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(ft_strlen(s1) + ft_strlen(s2));
	if (ptr)
	{
		while (i < ft_strlen(s1))
		{
			ptr[i] = s1[i];
			i++;
		}
		i = 0;
		while (i < ft_strlen(s2))
		{
			ptr[ft_strlen(s2) + i] = s2[i];
			ft_strlen(s2++);
			i++;
		}
	}
	else
		return (NULL);
	return (ptr);
}