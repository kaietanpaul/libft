/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:41:24 by kpaul             #+#    #+#             */
/*   Updated: 2024/03/20 17:28:12 by kpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num == 0 || size == 0)
	{
		num = 1;
		size = 1;
	}
	if (num * size / num != size)
		return (NULL);
	ptr = malloc(num * size);
	if (ptr)
		ft_memset (ptr, 0, num * size);
	else
		return (NULL);
	return (ptr);
}
