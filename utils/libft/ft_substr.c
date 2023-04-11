/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:36:40 by leborges          #+#    #+#             */
/*   Updated: 2022/11/09 21:16:26 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	j;
	unsigned int	i;
	char			*s2;

	j = start;
	i = 0;
	s2 = malloc((len + 1) * sizeof(char));
	if (!s || !s2)
		return (NULL);
	while (j < ft_strlen(s) && i < len)
	{
		s2[i] = s[j];
		i++;
		j++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int	main()
{
	char	str[] = "12345LeoFilipz";
	printf("%s", ft_substr(str, 5, 9));
}*/
