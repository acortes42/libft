/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:52:12 by acortes-          #+#    #+#             */
/*   Updated: 2019/11/05 18:52:15 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		operation1(const char *s1, const char *set)
{
	int		n;
	int		i;
	int		j;
	int		test;

	n = 0;
	test = 0;
	j = 0;
	i = 0;
	while (s1[n])
	{
		while (set[i])
		{
			if (set[i] == s1[n])
				test = 1;
			i++;
		}
		i = 0;
		if (test-- == 1)
			j++;
		else
			return (j);
		n++;
	}
	return (0);
}

int		operation2(const char *s1, const char *set)
{
	int		n;
	int		i;
	int		j;
	int		test;

	n = ft_strlen(s1) - 1;
	test = 0;
	j = 0;
	i = 0;
	while (n >= 0)
	{
		while (set[i])
		{
			if (set[i] == s1[n])
				test = 1;
			i++;
		}
		i = 0;
		if (test-- == 1)
			j++;
		else
			return (n);
		n--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		n;
	int		i;
	int		x;
	int		j;
	char	*res;

	if (!(s1 && set))
		return (NULL);
	n = operation1(s1, set);
	i = operation2(s1, set);
	j = (i - n) + 1;
	x = 0;
	if (!(res = (char*)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	if (j == 1)
	{
		res[0] = '\0';
		return (res);
	}
	if (res == NULL)
		return (NULL);
	while (x < j)
		res[x++] = s1[n++];
	res[x] = '\0';
	return (res);
}
