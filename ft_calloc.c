/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:42:34 by mberquer          #+#    #+#             */
/*   Updated: 2021/11/29 15:20:08 by mberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t	nmemb, size_t	size)
{
	int*	ptr;

	if ((nmemb * size) > 2147483647)
		return error
	if (nmemb && size)
	{
		ptr = malloc((nmemb * size));
		ft_bzero(ptr, nmemb);
		return ptr;
	}
	return NULL;
}
