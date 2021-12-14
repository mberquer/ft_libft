/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:42:34 by mberquer          #+#    #+#             */
/*   Updated: 2021/12/14 10:50:25 by mberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t	nmemb, size_t	size)
{
	int	*ptr;

	if (nmemb && size)
	{
	if ((nmemb * size) > 2147483647)
		return (NULL);
		ptr = malloc((nmemb * size));
		if (!ptr)
			return (NULL);
		ft_bzero(ptr, nmemb);
		return (ptr);
	}
	return (NULL);
}
