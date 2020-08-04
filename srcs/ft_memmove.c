/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:47:27 by acortes-          #+#    #+#             */
/*   Updated: 2019/11/08 10:47:31 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*str;
	char		*arr;

	str = (char*)dst;
	arr = (char*)src;
	i = 0;
	if (!(str) && !(arr))
		return (dst);
	if (dst < src)
		while (i < len)
		{
			str[i] = arr[i];
			i++;
		}
	else if (src < dst)
	{
		i = len;
		while (i-- > 0)
			str[i] = arr[i];
	}
	return (dst);
}
