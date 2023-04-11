/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:12:59 by leborges          #+#    #+#             */
/*   Updated: 2022/11/10 18:16:03 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	if (!dest || !src)
		return (0);
	i = ft_strlen(dest);
	j = 0;
	len_dst = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size < 1)
		return (len_src + size);
	while (i < (size - 1) && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (len_dst > size)
		return (size + len_src);
	return (len_dst + len_src);
}
/*
int	main()
{
	char	src[5] = "aaaaa";
	char	dest[9] = "bbbb";
	printf("%zu\n", ft_strlcat(dest, src, 8));
	printf("%s", dest);
}*/
