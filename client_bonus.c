/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:58:24 by leborges          #+#    #+#             */
/*   Updated: 2023/01/26 16:58:28 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	send_bits_to_server(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (1 << bit)) == 0)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(50);
		bit++;
	}
}

void	message(int signal)
{
	if (signal == SIGUSR1)
		ft_printf("The message was recieved by the server");
}

int	main(int ac, char **av)
{
	int					pid;
	int					i;
	struct sigaction	sa;

	sa.sa_handler = &message;
	i = 0;
	if (ac != 3)
	{
		ft_printf("Error!\n");
		ft_printf("You should have a process ID and a message as inputs\n");
	}
	else
	{
		pid = ft_atoi(av[1]);
		while (av[2][i])
		{
			sigaction(SIGUSR1, &sa, NULL);
			sigaction(SIGUSR2, &sa, NULL);
			send_bits_to_server(pid, av[2][i]);
			i++;
		}
		send_bits_to_server(pid, av[2][i]);
		send_bits_to_server(pid, '\n');
	}
}
