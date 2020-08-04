/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:55:04 by acortes-          #+#    #+#             */
/*   Updated: 2019/12/04 16:18:10 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] != '\0')
		i++;
	i += 1;
	str = malloc(i * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i-- > 0)
		str[i] = s[i];
	return (str);
}
