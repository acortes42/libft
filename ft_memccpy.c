/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 09:03:23 by acortes-          #+#    #+#             */
/*   Updated: 2019/12/03 14:39:51 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*str2;

	str = (unsigned char*)dst;
	str2 = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		if (str2[i] == (unsigned char)c)
		{
			str[i] = str2[i];
			return (str + i + 1);
		}
		str[i] = str2[i];
		i++;
	}
	return (0);
}
