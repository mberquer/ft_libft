/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:21:35 by mberquer          #+#    #+#             */
/*   Updated: 2021/11/29 12:24:50 by mberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strrchr(const char	*s, int	c)
{
	int	i;
	int	j;

	i = 0;
	j = NULL;
	while(s[i])
	{
		if(s[i] = c)
			j = i;
		i++;
	}
	return j;
}
