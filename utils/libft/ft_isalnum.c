/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:47:42 by leborges          #+#    #+#             */
/*   Updated: 2022/11/03 15:22:25 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{	
	return (ft_isdigit(c) + ft_isalpha(c));
}
/*
int	main()
{
	printf("%d\n", ft_isalnum('.'));
	printf("%d", isalnum('.'));
}*/
