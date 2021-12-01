/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:22:35 by mberquer          #+#    #+#             */
/*   Updated: 2021/12/01 17:07:44 by mberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*strdup(const char	*s)
{
	char	*s2;

	s2 = malloc(ft_strlen(s) + 1);
	ft_strlcpy(s2, s, (ft_strlen(s) + 1));
	return ((char *)s2);
}
