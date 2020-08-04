/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 19:55:47 by acortes-          #+#    #+#             */
/*   Updated: 2019/12/03 15:04:31 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	c1;
	char	*x;

	c1 = (char)c;
	x = (char*)s;
	i = 0;
	while (x[i])
		i++;
	while (x[i] != c1 && i > 0)
		i--;
	if (x[i] == c1)
		return (x + i);
	return (NULL);
}
