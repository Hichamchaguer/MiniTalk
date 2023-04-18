/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:11:41 by hchaguer          #+#    #+#             */
/*   Updated: 2022/11/24 22:22:19 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrhex(unsigned long n)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i += ft_putnbrhex(n / 16);
		i += ft_putnbrhex(n % 16);
	}
	else if (n >= 10 && n <= 15)
		i += ft_putchar(n + 55);
	else
		i += ft_putchar(n + 48);
	return (i);
}
