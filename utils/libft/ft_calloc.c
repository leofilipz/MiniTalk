/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:32:42 by leborges          #+#    #+#             */
/*   Updated: 2022/11/07 15:07:41 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(count * size);
	if (str == 0)
		return (0);
	while (i < count * size)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
/*
int	main()
{
	printf("%p", ft_calloc(6, 1));
}*/
