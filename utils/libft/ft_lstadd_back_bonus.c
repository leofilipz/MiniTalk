/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:45:52 by leborges          #+#    #+#             */
/*   Updated: 2022/11/12 17:10:07 by leborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}
/*
int		main(void)
{
	char	str[] = "LEO";

	t_list	*elem1;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*new = malloc(sizeof(t_list));

	if(!(elem1 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem2 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem3 = malloc(sizeof(t_list))))
		return (0);

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;
	new->content = (char *)str;
	ft_lstadd_back(&elem1, new);
	printf("\n%s\n", (char *)elem1->next->next->next->content); 
}*/
