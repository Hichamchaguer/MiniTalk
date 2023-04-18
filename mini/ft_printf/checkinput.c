/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkinput.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:36:42 by hchaguer          #+#    #+#             */
/*   Updated: 2022/11/24 22:31:27 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	my_input(char s, va_list args)
{
	int	i;

	i = 0;
	if (s == 'c')
		i += ft_putchar((char)va_arg(args, int));
	else if (s == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (s == 'p')
	{
		i += ft_putstr("0x");
		i += ft_putnbrhex_lower((unsigned long)va_arg(args, void *));
	}
	else if (s == 'd' || s == 'i')
		i += ft_putnbr(va_arg(args, int));
	else if (s == 'u')
		i += ft_putnbrunsigned(va_arg(args, unsigned int));
	else if (s == 'x')
		i += ft_putnbrhex_lower(va_arg(args, unsigned int));
	else if (s == 'X')
		i += ft_putnbrhex(va_arg(args, unsigned int));
	else if (s == '%')
		i += ft_putchar('%');
	return (i);
}
