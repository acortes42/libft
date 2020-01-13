/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 09:09:42 by acortes-          #+#    #+#             */
/*   Updated: 2019/12/03 14:37:22 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			x;
	unsigned char	*str;
	unsigned char	*str1;

	str = (unsigned char*)dst;
	str1 = (unsigned char*)src;
	x = 0;
	if (n && dst != src)
		while (n--)
			*str++ = *str1++;
	return (dst);
}
