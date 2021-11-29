/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:56:22 by mberquer          #+#    #+#             */
/*   Updated: 2021/11/29 12:10:45 by mberquer         ###   ########.fr       */
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
		while(src[j])
			if(j > size)
				return size;
			dest[i++] = src[j++];
		dest[i] = '\0';
		return (ft_strlen(dst) + j)
	}
	return 0;
}

