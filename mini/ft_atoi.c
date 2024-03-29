/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:46:07 by hchaguer          #+#    #+#             */
/*   Updated: 2023/01/03 20:46:57 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiniTalk.h"

static int	whitespaces(char str)
{
	while (str == ' ' || (str >= 9 && str <= 13))
		return (1);
	return (0);
}

static int	is_digit(char str)
{
	while (str >= '0' && str <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	nb;

	i = 0;
	sign = 1;
	while (whitespaces(str[i]) == 1)
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] && (str[i] == '+' || str[i] == '-'))
		i++;
	nb = 0;
	while (is_digit(str[i]) == 1)
	{
		if (nb > (unsigned long long)LLONG_MAX + 1 && sign == -1)
			return (0);
		if (nb > (unsigned long long)LLONG_MAX && sign == 1)
			return (-1);
		nb *= 10;
		nb += str[i] - 48;
		i++;
	}
	return (nb * sign);
}
