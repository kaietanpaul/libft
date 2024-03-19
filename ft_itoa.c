/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:51:25 by kpaul             #+#    #+#             */
/*   Updated: 2024/03/19 18:37:59 by kpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	get_sign(int n)
{
	char	sign;

	sign = '+';
	if (n < 0)
		sign = '-';
	return (sign);
}

static int	get_size(int n, char sign)
{
	int	i;

	sign = get_sign(n);
	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	if (sign == '-')
		i++;
	return (i);
}

static void	fill_string(char *string, long n_long, int start)
{
	while (n_long != 0)
	{
		start--;
		string[start] = (n_long % 10) + '0';
		n_long /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*string;
	char	sign;
	int		size;
	long	n_long;

	n_long = n;
	sign = get_sign(n);
	size = get_size(n, sign);
	string = malloc(size + 1);
	if (!string)
		return (NULL);
	string[size] = '\0';
	if (n_long == 0)
		string[0] = '0';
	else
	{
		if (n_long < 0)
			n_long = -n_long;
		fill_string(string, n_long, size);
		if (sign == '-')
			string[0] = '-';
	}
	return (string);
}
/*#include <stdio.h>
int	main(void)
{
	int n = -20 + 10 - 10000344 * -2;
	char *result = ft_itoa(n);

	printf("result is: %s", result);

	return (0);
}*/
