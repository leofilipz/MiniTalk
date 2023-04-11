/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:19:03 by leborges          #+#    #+#             */
/*   Updated: 2022/11/11 15:02:38 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->content = content;
	new_list->next = (NULL);
	return (new_list);
}
/*
int		main(void)
{
	int	age;
	
	age = 33;
	t_list	*elem;

	elem = ft_lstnew((void *)&age);
	printf("\n%d\n", *(int *)elem->content);
}*/
