/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:19:03 by leborges          #+#    #+#             */
/*   Updated: 2022/12/05 21:28:58 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_len(unsigned long long num)
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

void	ft_put_ptr(unsigned long long num)
{	
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_print_ptr(char placeholder, va_list args)
{
	unsigned long long	ptr;
	int					len;

	len = 0;
	(void) placeholder;
	ptr = va_arg (args, unsigned long long);
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	else
	{
		len += write(1, "0x", 2);
		ft_put_ptr(ptr);
		len += ft_ptr_len(ptr);
	}
	return (len);
}
