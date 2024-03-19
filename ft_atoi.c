/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:39:13 by kpaul             #+#    #+#             */
/*   Updated: 2024/03/19 17:39:28 by kpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			new_num;
	char		neg_pos;
	const char	*p;

	new_num = 0;
	neg_pos = '+';
	p = str;
	while (*p == ' ' || *p == '\n' || *p == '\t'
		|| *p == '\v' || *p == '\f' || *p == '\r')
		p++;
	if (*p == '-' || *p == '+')
	{
		neg_pos = *p;
		p++;
	}
	while (ft_isdigit(*p))
	{
		new_num *= 10;
		new_num += (*p - '0');
		p++;
	}
	if (neg_pos == '-')
		new_num *= -1;
	return (new_num);
}
