/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 13:55:34 by acortes-          #+#    #+#             */
/*   Updated: 2019/12/04 16:21:40 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*n_list;

	if (!del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		n_list = *lst;
		*lst = n_list->next;
		free(n_list);
	}
	*lst = NULL;
}
