/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:24:39 by leborges          #+#    #+#             */
/*   Updated: 2022/11/10 15:33:31 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[i + j])
		j++;
	while (j && ft_strchr(set, s1[i + j - 1]))
		j--;
	result = (char *)malloc(sizeof(char) * (j + 1));
	if (!result)
		return (NULL);
	while (k < j)
		result[k++] = s1[i++];
	result[k] = '\0';
	return (result);
}
/*
int	main()
{
	char	str[] = "oLeoFilipzpartecascalho";
	char	set[] = "opartecascalho";

	printf("%s", ft_strtrim(str, set));
}*/
