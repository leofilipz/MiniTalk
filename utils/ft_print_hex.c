/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:35:40 by leborges          #+#    #+#             */
/*   Updated: 2022/12/05 19:45:52 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned int num)
{
	int	count;

	count = 0;
	while (num)
	{
		count++;
		num /= 16;
	}
	return (count);
}

void	ft_put_hex(unsigned int num, char placeholder)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, placeholder);
		ft_put_hex(num % 16, placeholder);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (placeholder == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			else if (placeholder == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

int	ft_print_hex(char placeholder, va_list args)
{
	unsigned int	num;
	int				len;

	num = va_arg (args, unsigned int);
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(num, placeholder);
	len = ft_hex_len(num);
	return (len);
}	
