/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:09:59 by mberquer          #+#    #+#             */
/*   Updated: 2021/11/24 14:15:04 by mberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void	*dest, cont void	*src, size_t	n)
{
	int	i;
	int	temp[n];

	i = 0;
	while(i < n)
	{
		temp[i] = src[i];
		i++;
	}
	i = 0;
	while(i < n)
	{
		dest[i] = temp[i];
		i++;
	}
	return *dest;
}
