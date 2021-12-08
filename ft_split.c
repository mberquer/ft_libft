/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:41:19 by mberquer          #+#    #+#             */
/*   Updated: 2021/12/07 15:42:52 by mberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	int		j;
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
	int		buffer;

	i = 0;
	j = 0;
	a = 0;
	buffer = 0;
	s2 = (char **)malloc(((ft_count(s, c) + 1) * sizeof(char *)));
	if (!s2)
		return (NULL);
	while (s[i])
	{	
		if (buffer && s[i] == c)
		{
			s2[a] = ft_substr(s, j, i - j);
			a++;
			buffer = 0;
		}
		if (!buffer && s[i] != c)
		{
			j = i;
			buffer = 1;
		}
		i++;
	}
	if (buffer)
	{
		s2[a] = ft_substr(s, j, i - j);
		a++;
	}
	s2[a] = NULL;
	return (s2);
}
