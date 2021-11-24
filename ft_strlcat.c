/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:56:22 by mberquer          #+#    #+#             */
/*   Updated: 2021/11/24 15:12:37 by mberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char	*dst, const char	*src, size_t	size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if(dest[i])
	{
		while(dest[i])
			i++;
		while(src[j] && j < size)
			dest[i++] = src[j++];
		dest[i] = '\0';
		return ft_strlen(dst) + j;
	}
	return

