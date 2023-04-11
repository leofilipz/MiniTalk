/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:53:54 by leborges          #+#    #+#             */
/*   Updated: 2022/11/07 10:17:41 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		len;
	int		i;
	char	*s2;

	i = 0;
	s2 = (char *)s;
	len = ft_strlen(s2);
	if (c == '\0')
		return (&s2[len]);
	while (s2[i])
	{
		if (c == s2[i])
			return (&s2[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	str[] = "ggggtup";
	printf("%s", ft_strchr(str, 't'));
}*/
