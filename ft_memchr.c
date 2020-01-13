/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 09:05:27 by acortes-          #+#    #+#             */
/*   Updated: 2019/12/03 14:43:01 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	str2;

	str = (unsigned char*)s;
	str2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == str2)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
