#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num == 0 || size == 0)
		return (NULL);
	if (num < 2147483647 && size < 2147483647 && (num * size) < 2147483647)
		ptr = malloc(num * size);
	else
		return (NULL);
	if (ptr)
		ft_memset (ptr, 0, num * size);
	return (ptr);
}