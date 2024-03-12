#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	index_hay;
	unsigned int	index_need;

	index_hay = 0;
	index_need = 0;
	if (needle[0] == '\0')
		return ((char *)(haystack));
	while (index_hay < len)
	{
		if (haystack[index_hay] == needle[index_need])
		{
			if ((ft_strlen(needle) - 1) == (int)index_need)
				return ((char *)haystack + index_hay - index_need);
			index_hay ++;
			index_need ++;
		}
		else
		{
			index_hay ++;
			index_need = 0;
		}
	}
	return (NULL);
}
