/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:40:54 by mberquer          #+#    #+#             */
/*   Updated: 2021/12/01 19:25:33 by mberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char	*little, size_t	len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little)
	{
		while (big && i < len)
		{
			j = 0;
			while (big[i + j] == little[j] && i + j < len)
			{
				if (little[j++] == '\0')
					return ((char *)&big[i]);
			}
			i++;
		}
		return (0);
	}
	return ((char *)big);
}
