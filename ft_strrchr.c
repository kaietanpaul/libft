/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:21:52 by kpaul             #+#    #+#             */
/*   Updated: 2024/03/07 12:22:31 by kpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr( const char *str, int ch )
{
	int		i;
	char	*p;

	i = 0;
	p = NULL;
	while (str[i])
	{
		if (str[i] == ch)
			p = (char *)&str[i];
		i++;
	}
	if (ch == '\0')
		return ((char *)&str[i]);
	return (p);
}
