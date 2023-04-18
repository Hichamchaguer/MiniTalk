/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:09:10 by hchaguer          #+#    #+#             */
/*   Updated: 2022/11/24 22:16:56 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		j;

	va_start(args, s);
	i = 0;
	j = 0;
	while (s[j])
	{
		if (s[j] == '%')
		{
			j++;
			i += my_input(s[j], args);
		}
		else if (s[j] != '%')
			i += ft_putchar(s[j]);
		j++;
	}
	va_end(args);
	return (i);
}
