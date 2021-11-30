/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:36:56 by mberquer          #+#    #+#             */
/*   Updated: 2021/11/30 16:50:37 by mberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char	*src, size_t	size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (i < size)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (i);
	}
	return (size);
}
