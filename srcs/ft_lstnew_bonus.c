/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 13:53:26 by acortes-          #+#    #+#             */
/*   Updated: 2019/11/16 13:53:30 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list *x;

	if (!(x = (t_list*)malloc(sizeof(t_list))))
		return (0);
	x->content = (void*)content;
	x->next = NULL;
	return (x);
}
