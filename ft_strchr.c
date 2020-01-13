/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:14:05 by acortes-          #+#    #+#             */
/*   Updated: 2019/11/05 11:14:08 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	str2;
	char	*x;

	str2 = (char)c;
	x = (char*)str;
	i = 0;
	while (x[i] != '\0' && x[i] != str2)
		i++;
	if (x[i] == str2)
		return (x + i);
	return (0);
}
