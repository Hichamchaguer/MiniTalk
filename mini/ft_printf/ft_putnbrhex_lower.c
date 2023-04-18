/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhex_lower.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 02:46:19 by hchaguer          #+#    #+#             */
/*   Updated: 2022/11/24 22:23:57 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrhex_lower(unsigned long n)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i += ft_putnbrhex_lower(n / 16);
		i += ft_putnbrhex_lower(n % 16);
	}
	else if (n >= 10 && n <= 15)
		i += ft_putchar(n + 87);
	else
		i += ft_putchar(n + 48);
	return (i);
}
