/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 13:55:12 by acortes-          #+#    #+#             */
/*   Updated: 2019/11/16 13:55:15 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list *x;

	x = lst;
	if (lst)
	{
		del(lst->content);
		lst->next = NULL;
		free(x);
	}
}
