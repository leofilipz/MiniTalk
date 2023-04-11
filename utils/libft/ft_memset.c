/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:08:44 by leborges          #+#    #+#             */
/*   Updated: 2022/11/04 11:33:12 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}
/*
int	main()
{
	int arr[] = { 3, 4, 3, 3};
	
	ft_memset(arr, 0, 4 * sizeof(int));
	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
	memset(arr, 1, 2 * sizeof(int));
	printf("%d %d\n", arr[0], arr[1]);
}*/
