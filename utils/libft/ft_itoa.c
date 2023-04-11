/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:32:44 by leborges          #+#    #+#             */
/*   Updated: 2022/11/10 18:17:16 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	len(long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		len ++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	numb;
	int		i;

	numb = n;
	i = len(numb);
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (numb == 0)
		str[0] = '0';
	if (numb < 0)
	{
		str[0] = '-';
		numb *= -1;
	}
	while (numb > 0)
	{
		str[i] = '0' + (numb % 10);
		numb /= 10;
		i--;
	}
	return (str);
}
/*
int	main()
{
	long	n = 45555;
	printf("Result of itoa = %s", ft_itoa(n));
}*/
