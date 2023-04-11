/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:24:50 by leborges          #+#    #+#             */
/*   Updated: 2022/11/09 21:06:25 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (n-- > 0)
		{
			((char *)dest)[n] = ((char *)src)[n];
		}
	}
	else
	{	
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
		i++;
		}
	}
	return (dest);
}
/*
int	main()
{
	char	str[] = "memmove can be very useful.......";
	char	str2[] = "memmove can be very useful.......";

	ft_memmove(str + 20, str + 15, 11);
	printf("%s\n", str);
	memmove(str2 + 20, str2 + 15, 11);
	printf("%s", str2);	
}*/
