/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 14:16:42 by kpaul             #+#    #+#             */
/*   Updated: 2024/03/08 12:29:01 by kpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*chdest;
	const char		*chsrc;

	chdest = (char *)dest;
	chsrc = (const char *)src;
	i = 0;
	while (i < n)
	{
		chdest[i] = chsrc[i];
		i++;
	}
	return (dest);
}
