/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:51:50 by kpaul             #+#    #+#             */
/*   Updated: 2024/03/01 17:20:34 by kpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int check)
{
	return ((check > 64 && check < 91) || (check > 96 && check < 123));
}
