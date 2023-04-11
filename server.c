/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:13:08 by leborges          #+#    #+#             */
/*   Updated: 2023/01/25 22:19:36 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int signal)
{
	static int	c;
	static int	bit = 0;

	if (signal == SIGUSR1)
		c |= 1 << bit;
	bit++;
	if (bit == 8)
	{
		write(1, &c, 1);
		bit = 0;
		c = 0;
	}
}

int	main(int ac, char **av)
{	
	struct sigaction	action;

	action.sa_handler = &handler;
	(void)av;
	if (ac != 1)
	{
		ft_printf("error/n");
		ft_printf("try: ./server/n");
		return (0);
	}
	ft_printf("This is my pid: %d\n", getpid());
	while (1)
	{
		sigaction(SIGUSR1, &action, NULL);
		sigaction(SIGUSR2, &action, NULL);
		pause();
	}
}
