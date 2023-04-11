/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:08:56 by leborges          #+#    #+#             */
/*   Updated: 2022/11/07 17:41:36 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len;
	char	*s3;

	len = (ft_strlen(s1) + ft_strlen(s2));
	s3 = malloc((len + 1) * sizeof(char *));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		s3[i] = s2[j];
		j++;
		i++;
	}
	s3[i] = 0;
	return (s3);
}
/*
int	main()
{
	char	str[] = "over";
	char	str2[] = "power";
	
	printf("%s", ft_strjoin(str, str2));
}*/
