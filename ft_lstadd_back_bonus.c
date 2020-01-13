/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 13:54:54 by acortes-          #+#    #+#             */
/*   Updated: 2019/11/16 13:54:55 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *last;

	if (alst == NULL)
		return ;
	last = *alst;
	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	while (last->next)
		last = last->next;
	last->next = new;
}
