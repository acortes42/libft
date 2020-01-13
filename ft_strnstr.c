/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:39:53 by acortes-          #+#    #+#             */
/*   Updated: 2019/12/03 15:20:04 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[i] && i < len)
	{
		n = 0;
		while (haystack[i + n] == needle[n])
		{
			if ((i + n + 1) > len)
				return (0);
			if (needle[n + 1] == '\0')
				return ((char*)haystack + i);
			n++;
		}
		i++;
	}
	return (0);
}
