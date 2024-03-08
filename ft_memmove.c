/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:10:27 by kpaul             #+#    #+#             */
/*   Updated: 2024/03/05 12:50:51 by kpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*chdest;
	char			*chsrc;

	chdest = (char *)dest;
	chsrc = (char *)src;
	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			chdest[i] = chsrc[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i --;
			chdest[i] = chsrc[i];
		}
	}
	return (dest);
}
