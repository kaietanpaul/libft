/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:35:43 by kpaul             #+#    #+#             */
/*   Updated: 2024/03/20 18:54:02 by kpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	make_set(char const *set, int char_set[256])
{
	size_t			set_i;
	unsigned char	ch;

	set_i = 0;
	while (set[set_i])
	{
		ch = set[set_i];
		char_set[ch] = 1;
		set_i++;
	}
}

static int	start_trim(char const *s1, size_t j, size_t k, int char_set[256])
{
	while (j <= k)
	{
		if (char_set[(unsigned char)s1[j]] == 1)
			j++;
		else
			break ;
	}
	return (j);
}

static int	end_trim(char const *s1, size_t j, size_t k, int char_set[256])
{
	while (j <= k)
	{
		if (char_set[(unsigned char)s1[k]] == 1)
			k--;
		else
			break ;
	}
	return (k);
}

static char	*populate(char *ptr, char const *s1, size_t j, size_t k)
{
	size_t	l;
	size_t	make_size;

	l = 0;
	if (j <= k)
		make_size = k - j + 2;
	else
		make_size = 1;
	ptr = (char *)malloc(make_size);
	if (ptr)
	{
		while (j <= k)
		{
			ptr[l] = s1[j];
			l++;
			j++;
		}
		ptr[l] = '\0';
		return (ptr);
	}
	else
		return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		j;
	size_t		k;
	char		*ptr;
	int			char_set[256];

	j = 0;
	ptr = NULL;
	k = 0;
	if (!s1 || !set)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	k = ft_strlen(s1) - 1;
	ft_memset(char_set, 0, sizeof(char_set));
	make_set(set, char_set);
	j = start_trim(s1, j, k, char_set);
	k = end_trim(s1, j, k, char_set);
	if (j > k)
	{
		ptr = malloc(1);
		if (ptr)
			ptr[0] = '\0';
		return (ptr);
	}
	return (populate(ptr, s1, j, k));
}
