/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llyra-li <llyra-li@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 22:46:51 by llyra-li          #+#    #+#             */
/*   Updated: 2026/06/30 22:46:55 by llyra-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst || !new)
		return ;
	
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	
	current = *lst;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
}