/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:11:59 by leborges          #+#    #+#             */
/*   Updated: 2022/11/09 12:22:44 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	string_count(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
	}
	return (j + 1);
}

static int	sub(char const *s, char c, char **result)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			j = i;
			while (s[i] && s[i] != c)
				i++;
			result[k++] = ft_substr(s, j, i - j);
		}
	}
	return (k);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;

	j = 0;
	if (!s)
		return (NULL);
	i = string_count(s, c);
	result = (char **)malloc(sizeof(char *) * (i + 1));
	if (!result)
		return (NULL);
	j = sub(s, c, result);
	result[j] = NULL;
	return (result);
}
/*
int	main()
{
	int i = 0;
	char **str;
		
	str = ft_split("My|name|is|Leo", '|');
	while (i < 5)
	{
		printf("string %d : %s\n", i, str[i]);
		i++;
	}
	return (0);
}*/
