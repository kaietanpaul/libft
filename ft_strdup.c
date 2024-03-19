/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:36:31 by kpaul             #+#    #+#             */
/*   Updated: 2024/03/19 18:36:32 by kpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s) + 1;
	i = 0;
	ptr = malloc(s_len);
	if (ptr)
	{
		while (i < s_len)
		{
			ptr[i] = s[i];
			i++;
		}
	}
	else
		return (NULL);
	return (ptr);
}
