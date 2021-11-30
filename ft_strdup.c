/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:22:35 by mberquer          #+#    #+#             */
/*   Updated: 2021/11/30 14:03:26 by mberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*strdup(const char	*s)
{
	char	*s2;

	s2 = malloc(ft_strlen(s) + 1);
	ft_strlcpy(s2, s, (ft_strlen(s) + 1));
	return (*s2);
}
