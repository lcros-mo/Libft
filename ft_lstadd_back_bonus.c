/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcros-mo <lcros-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 03:28:35 by lcros-mo          #+#    #+#             */
/*   Updated: 2020/01/13 03:47:20 by lcros-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (new)
	{
		temp = *lst;
		if (!*lst)
		{
			*lst = new;
			new->next = NULL;
		}
		else
		{
			temp = ft_lstlast(*lst);
			temp->next = new;
		}
	}
}