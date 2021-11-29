/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:40:54 by mberquer          #+#    #+#             */
/*   Updated: 2021/11/29 12:53:52 by mberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char	*big, const char	*little, size_t	len)
{
	int	i;
	int	j;

	i = 0;
	if(little)
	{
		while(big && i < len)
		{
			j = 0;
			while(big[i + j] == little[j])
			{
				if(little[j++] == '\0')
					return *big[i];
			}
		}
		return NULL;
	}
	return *big;
}
