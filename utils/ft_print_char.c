/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:06:05 by leborges          #+#    #+#             */
/*   Updated: 2022/12/05 21:07:25 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c(char placeholder, va_list args)
{
	char	c;

	(void) placeholder;
	c = va_arg(args, int);
	write(1, &c, 1);
	return (1);
}

int	ft_print_s(char placeholder, va_list args)
{
	int		i;
	char	*str;

	i = 0;
	(void) placeholder;
	str = va_arg(args, char *);
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	return (i);
}

int	ft_print_char(char placeholder, va_list args)
{
	int	i;

	i = 0;
	if (placeholder == 'c')
		i += ft_print_c(placeholder, args);
	if (placeholder == 's')
		i += ft_print_s(placeholder, args);
	if (placeholder == '%')
		i += write(1, "%", 1);
	return (i);
}
