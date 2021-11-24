/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:36:56 by mberquer          #+#    #+#             */
/*   Updated: 2021/11/24 14:54:19 by mberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char	*dst, const char	*src, size_t	size)
{
	size_t	i;

	i = 0;
	if(size =! 0)
	{
		while(i < size)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return i;
	}
	return size;
}
