/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:11:21 by hchaguer          #+#    #+#             */
/*   Updated: 2022/11/24 22:28:42 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *c);
int	my_input(char s, va_list args);
int	ft_putnbrhex(unsigned long n);
int	ft_putnbrunsigned(unsigned int n);
int	ft_putnbrhex_lower(unsigned long n);
int	ft_printf(const char *s, ...);

#endif
