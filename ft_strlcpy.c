/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:07:28 by kpaul             #+#    #+#             */
/*   Updated: 2024/03/19 20:23:12 by kpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (dest_size == 0)
		return (j);
	while (src[i] != '\0' && i < dest_size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (dest_size > 0)
		dest[i] = '\0';
	return (j);
}
