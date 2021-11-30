/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:56:22 by mberquer          #+#    #+#             */
/*   Updated: 2021/11/30 16:51:16 by mberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dst[i])
	{
		while (dst[i])
			i++;
		while (src[j])
		{
			if (j > size)
				return (size);
			dst[i++] = src[j++];
		}
		dst[i] = '\0';
		return (ft_strlen(dst) + j);
	}
	return (0);
}
