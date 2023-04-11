/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:25:44 by leborges          #+#    #+#             */
/*   Updated: 2022/11/10 14:28:09 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
char	f(unsigned int i, char c)
{
	char	d;
	d = c - 32;
	return (d);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s2;

	i = 0;
	if (!s || !f)
		return (NULL);
	s2 = (char *)malloc(ft_strlen(s) + 1);
	if (!s2)
		return (NULL);
	while (s[i])
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int	main()
{
	char	str[] = "leofilipz";
	char	*result = ft_strmapi(str, f);
	printf("%s", result);
}*/
