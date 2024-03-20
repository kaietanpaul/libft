/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:36:41 by kpaul             #+#    #+#             */
/*   Updated: 2024/03/19 20:31:37 by kpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	index_hay;
	unsigned int	index_need;

	index_hay = 0;
	index_need = 0;
	if (needle[0] == '\0')
		return ((char *)(haystack));
	while (index_hay < len && haystack[index_hay] != '\0')
	{
		if (haystack[index_hay] == needle[index_need])
		{
			if (needle[index_need + 1] == '\0')
				return ((char *)haystack + index_hay - index_need);
			index_need++;
		}
		else
		{
			index_hay -= index_need;
			index_need = 0;
		}
		index_hay++;
	}
	return (NULL);
}
