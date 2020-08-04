/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 16:04:38 by acortes-          #+#    #+#             */
/*   Updated: 2019/12/04 16:26:43 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	t_list	*n_list2;
	void	*space;

	if (!lst || !f)
		return (NULL);
	space = (*f)(lst->content);
	if (!(n_list2 = ft_lstnew(space)))
		return (NULL);
	n_list = n_list2;
	lst = lst->next;
	while (lst)
	{
		space = (*f)(lst->content);
		if (!(n_list2->next = ft_lstnew(space)))
		{
			ft_lstclear(&n_list, del);
			return (NULL);
		}
		n_list2 = n_list2->next;
		lst = lst->next;
	}
	return (n_list);
}
