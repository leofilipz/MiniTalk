/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:55:16 by leborges          #+#    #+#             */
/*   Updated: 2022/12/05 21:25:02 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_secondary(char *place, va_list args)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (place[i])
	{
		if (place[i] == '%')
		{
			i++;
			if (place[i] == 'c' || place[i] == 's' || place[i] == '%')
				res += ft_print_char(place[i], args);
			else if (place[i] == 'd' || place[i] == 'i' || place[i] == 'u')
				res += ft_print_int(place[i], args);
			else if (place[i] == 'x' || place[i] == 'X')
				res += ft_print_hex(place[i], args);
			else if (place[i] == 'p')
				res += ft_print_ptr(place[i], args);
		}
		else
			res += write(1, &place[i], 1);
		i++;
	}
	return (res);
}

int	ft_printf(const char *placeholder, ...)
{
	int		len;
	va_list	args;

	va_start(args, placeholder);
	len = ft_secondary((char *)placeholder, args);
	va_end (args);
	return (len);
}
