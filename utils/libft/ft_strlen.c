/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:25:32 by leborges          #+#    #+#             */
/*   Updated: 2022/11/03 18:40:57 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
int	main()
{
	char a[20]="Program";
	char b[20]={'P','r','o','g','r','a','m','\0'};

	printf("Length of string a = %zu \n", ft_strlen(a));
	printf("Length of string b = %zu \n", ft_strlen(b));
	printf("Length of string a = %zu \n", strlen(a));
	printf("Length of string b = %zu \n", strlen(a));
}*/
