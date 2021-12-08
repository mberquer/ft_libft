/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:09:59 by mberquer          #+#    #+#             */
/*   Updated: 2021/12/07 15:43:48 by mberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_count(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*result;
	int			i;
	long int	n2;	

	n2 = (long int)n;
	i = 0;
	result = (char *)malloc((ft_count(n) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = ft_count(n2);
	if (n < 0)
	{
		result[0] = '-';
		n2 *= -1;
	}
	result[i] = '\0';
	i--;
	if (n == 0)
	{
		result[i] = '0';
		return (result);
	}
	while (n2 != 0)
	{
		result[i] = (n2 % 10) + 48;
		n2 /= 10;
		i--;
	}
	return (result);
}
