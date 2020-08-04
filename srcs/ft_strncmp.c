/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:28:25 by acortes-          #+#    #+#             */
/*   Updated: 2019/12/03 15:22:35 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while (n > 1)
	{
		if (s1[i] == '\0' || s1[i] != s2[i])
			return ((unsigned char)s1[i] - s2[i]);
		i++;
		n--;
	}
	return ((unsigned char)s1[i] - s2[i]);
}
