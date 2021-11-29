/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:32:13 by mberquer          #+#    #+#             */
/*   Updated: 2021/11/29 12:37:07 by mberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memchr(const void	*s, int	c, size_t	n)
{
	int	i;

	i = 0;
	while(i < n)
		if(s[i] == c)
			return *s[i];
	return NULL;
}
