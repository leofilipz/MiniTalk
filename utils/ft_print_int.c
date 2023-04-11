/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:19:36 by leborges          #+#    #+#             */
/*   Updated: 2022/12/05 19:46:38 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_di(char placeholder, va_list args)
{
	int		n;
	char	*str;

	(void) placeholder;
	n = va_arg (args, int);
	str = ft_itoa(n);
	ft_putstr_fd(str, 1);
	n = ft_strlen(str);
	free (str);
	return (n);
}

int	ft_ulen(unsigned int n)
{
	int	count;

	count = 0;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

int	ft_unsigned(unsigned int n)
{
	int		count;
	int		len;
	char	*str;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	count = 0;
	len = ft_ulen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		str = NULL;
	str[len--] = '\0';
	while (n != 0)
	{
		str[len] = 48 + n % 10;
		n /= 10;
		len --;
	}
	ft_putstr_fd(str, 1);
	count += ft_strlen(str);
	free (str);
	return (count);
}

int	ft_print_u(char placeholder, va_list args)
{
	unsigned int	n;

	(void) placeholder;
	n = va_arg (args, unsigned int);
	n = ft_unsigned(n);
	return (n);
}

int	ft_print_int(char placeholder, va_list args)
{
	int	i;

	i = 0;
	if (placeholder == 'i' || placeholder == 'd')
		i += ft_print_di(placeholder, args);
	else if (placeholder == 'u')
		i += ft_print_u(placeholder, args);
	return (i);
}
