/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:06:31 by acortes-          #+#    #+#             */
/*   Updated: 2019/12/03 14:58:56 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[n] && (n + i + 1) < dstsize)
	{
		dst[i + n] = src[n];
		n++;
	}
	if (i < dstsize)
		dst[i + n] = '\0';
	return (i + ft_strlen(src));
}
