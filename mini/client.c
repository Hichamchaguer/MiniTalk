/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 21:49:04 by hchaguer          #+#    #+#             */
/*   Updated: 2023/01/05 16:29:43 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiniTalk.h"

static int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

static void	client(int pid, char c)
{
	int	i;
	int	_err;

	i = 8;
	_err = 0;
	while (i--)
	{
		if (c >> i & 1)
			_err = kill(pid, SIGUSR1);
		else
			_err = kill(pid, SIGUSR2);
		if (_err == -1)
		{
			ft_printf("\033[0;31m TRANSMISSION FAILD...");
			exit(EXIT_FAILURE);
		}
		usleep(170);
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	pid;

	i = 0;
	if (ac < 3)
	{
		ft_printf("\n\033[0;31m ARGUMENTS ARE NOT ENOUGH !!!\n");
		exit(EXIT_FAILURE);
	}
	pid = ft_atoi(av[1]);
	if (pid < 0 || (!(ft_isdigit(av[1][0]))))
	{
		ft_printf("\n\033[0;31m Please enter an integer positive interger !!!\n");
		exit(EXIT_FAILURE);
	}
	while (av[2][i])
		client(pid, av[2][i++]);
	return (0);
}
