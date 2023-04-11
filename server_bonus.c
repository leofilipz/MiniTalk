/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:58:39 by leborges          #+#    #+#             */
/*   Updated: 2023/01/26 16:58:42 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	handler(int signal, siginfo_t *info, void *n)
{
	static int	c;
	static int	bit = 0;

	(void)n;
	(void)info;
	if (signal == SIGUSR1)
		c |= 1 << bit;
	bit++;
	if (bit == 8)
	{
		if (c == '\0')
			kill(info->si_pid, SIGUSR1);
		write(1, &c, 1);
		bit = 0;
		c = 0;
	}
}

int	main(int ac, char **av)
{	
	struct sigaction	signl;

	signl.sa_sigaction = &handler;
	signl.sa_flags = SA_SIGINFO;
	(void)av;
	if (ac != 1)
	{
		ft_printf("error/n");
		ft_printf("try: ./server/n");
		return (0);
	}
	ft_printf("%d\n", getpid());
	while (1)
	{
		sigaction(SIGUSR1, &signl, NULL);
		sigaction(SIGUSR2, &signl, NULL);
		pause();
	}
}
