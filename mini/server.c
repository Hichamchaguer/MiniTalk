/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 21:48:18 by hchaguer          #+#    #+#             */
/*   Updated: 2023/01/04 16:07:04 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiniTalk.h"

static void	myserver(int signal)
{
	static int				i;
	static char				c;

	c |= (signal == SIGUSR1);
	if (++i == 8)
	{
		ft_printf("%c", c);
		c = 0;
		i = 0;
	}
	else
		c = c << 1;
}

int	main(void)
{
	ft_printf("\nPID : %d\n", getpid());
	sleep(2);
	ft_printf("      ...WAITING FOR THE MESSAGE...\n");
	signal(SIGUSR1, myserver);
	signal(SIGUSR2, myserver);
	while (1)
		pause();
	return (0);
}
