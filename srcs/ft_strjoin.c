/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:08:24 by acortes-          #+#    #+#             */
/*   Updated: 2019/11/18 13:08:25 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total;
	char	*str;
	int		n;

	if (!(s1 && s2))
		return (NULL);
	total = ft_strlen(s2) + ft_strlen(s1) + 1;
	str = (char*)malloc(total * sizeof(char));
	if (!(str))
		return (NULL);
	n = 0;
	while (*s1)
		str[n++] = *s1++;
	while (*s2)
		str[n++] = *s2++;
	str[n] = '\0';
	return (str);
}
