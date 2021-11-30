/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:02:39 by mberquer          #+#    #+#             */
/*   Updated: 2021/11/30 16:48:51 by mberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t	n)
{
	char	*s2;
	char	*d2;
	size_t	i;

	s2 = (char*)src;
	d2 = (char*)dest;
	i = 0;
	while (i < n)
	{
		d2[i] = s2[i];
		i++;
	}
	return (dest);
}
