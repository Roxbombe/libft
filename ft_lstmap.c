/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffi-k <rraffi-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:57:41 by rraffi-k          #+#    #+#             */
/*   Updated: 2022/12/06 10:34:06 by rraffi-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*tmp2;

	if (!f || !(*del) || !lst)
		return (NULL);
	lst2 = ft_lstnew((*f)(lst->content));
	if (!lst2)
	{
		ft_lstclear(&lst2, del);
		return (NULL);
	}
	lst = lst->next;
	tmp2 = 0;
	while (lst)
	{
		tmp2 = ft_lstnew((*f)(lst->content));
		if (!tmp2)
		{
			ft_lstclear(&lst2, del);
			return (NULL);
		}		
		ft_lstadd_back(&lst2, tmp2);
		lst = lst->next;
	}
	return (lst2);
}
