/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:41:19 by mberquer          #+#    #+#             */
/*   Updated: 2021/12/03 17:02:51 by mberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_count(char const *s, char c)
{
	size_t	i;
	int	j;
	size_t	count;

	i = 0;
	j = 1;
	count = 0;
	while (s[i])
	{
		if (j && s[i] != c)
		{
			count++;
			j = 0;
		}
		else if (!j && s[i] == c)
			j = 1;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**s2;
	size_t	i;
	size_t	j;
	size_t	a;
	size_t	len;

	i = 0;
	j = 0;
	a = 0;
	len = ft_count(s, c);
	s2 = (char **)malloc(len * sizeof(char*) + 1);
	if (!s2)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
		{
			s2[a] = ft_substr(s, j, i - j);
			while (s[i] == c)
				i++;
			j = i;
			a++;
		}
		i++;
	}
	s2[a] = NULL;
	return (s2);
}
