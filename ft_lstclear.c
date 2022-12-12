/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffi-k <rraffi-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:30:59 by rraffi-k          #+#    #+#             */
/*   Updated: 2022/12/06 15:36:23 by rraffi-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*next;

	if (!(*lst) || !(*del))
		return ;
	curr = *lst;
	while (curr)
	{
		next = curr->next;
		(*del)(curr->content);
		free(curr);
		curr = next;
	}
	*lst = NULL;
}
