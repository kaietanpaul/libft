#include "libft.h"


void	ft_putnbr_fd(int n, int fd)
{
	char	*string;
	int	i;

	i = 0;
	string = ft_itoa(n);
	if (string != NULL)
		while (string[i])
		{
			write(fd, &string[i], 1);
			i++;
		}
}
