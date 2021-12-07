/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:41:19 by mberquer          #+#    #+#             */
/*   Updated: 2021/12/07 09:22:16 by mberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

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

	i = 0;
	j = 0;
	a = 0;
	s2 = (char **)malloc((ft_count(s, c) * sizeof(char*)) + 1);
	if (!s2)
		return (NULL);
	while (s[i])
	{	
		if (s[i] == c && i != 0 && s[i - 1] != c)
		{
		//	printf("s[%zu] = c j = %zu\n", i, j);
			s2[a] = ft_substr(s, j, i - j);
			printf("%s\n", s2[a]);
			while (s[i] == c && s[i])
				i++;
			j = i;
			a++;
		}
		i++;
	}
	s2[a] = NULL;
	printf("%s\n", s2[a]);
	return (s2);
}

int	main()
{ 
	ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
//	ft_split("                      ", ' ');
}
