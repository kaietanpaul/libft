/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:43:57 by kpaul             #+#    #+#             */
/*   Updated: 2024/03/19 17:45:19 by kpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*string;
	int		i;

	i = 0;
	string = ft_itoa(n);
	if (string != NULL)
	{
		while (string[i])
		{
			write(fd, &string[i], 1);
			i++;
		}
	}
}
