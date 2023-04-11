/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <leborges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:13:21 by leborges          #+#    #+#             */
/*   Updated: 2023/01/25 22:33:24 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

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

int	main(int ac, char **av)
{
	int		pid;
	int		i;

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
			send_bits_to_server(pid, av[2][i]);
			i++;
		}
		send_bits_to_server(pid, '\n');
	}
}
