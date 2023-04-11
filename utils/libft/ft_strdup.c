/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:53:59 by leborges          #+#    #+#             */
/*   Updated: 2022/11/07 15:08:35 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*s2;

	len = ft_strlen(s);
	i = 0;
	s2 = malloc((len + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	while (i < len)
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = 0;
	return (s2);
}
/*
int	main()
{
	char	src[] = "42program";

	printf("%s", ft_strdup(src));
}*/
