/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:28:21 by acortes-          #+#    #+#             */
/*   Updated: 2019/11/05 16:28:25 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	x;

	x = 0;
	if (!(s))
		return (NULL);
	if (!(res = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (!(start > ft_strlen(s)))
	{
		while (x < len)
		{
			res[x] = s[x + start];
			x++;
		}
	}
	res[x] = '\0';
	return (res);
}
