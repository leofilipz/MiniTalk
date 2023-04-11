/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:45:56 by leborges          #+#    #+#             */
/*   Updated: 2022/11/04 16:48:09 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int	main()
{
	int	arr1 [] = {1, 2};
	int	arr2 [] = {3, 3};

	ft_memcpy(arr1, arr2, 2 * sizeof(int));
	printf("%d %d\n", arr1[0], arr1[1]);
	memcpy(arr1, arr2, 2 * sizeof(int));
	printf("%d %d\n", arr1[0], arr1[1]);
}*/
