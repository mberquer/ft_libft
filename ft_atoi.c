/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:55:23 by mberquer          #+#    #+#             */
/*   Updated: 2021/12/07 15:39:38 by mberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char	*nptr)
{
	int	i;
	int	num;
	int	minus;

	i = 0;
	num = 0;
	minus = 1;
	while (nptr[i])
	{
		while (((nptr[i] >= 9) && (nptr[i] <= 13)) || (nptr[i] == ' '))
			i++;
		if (nptr[i] == '-')
		{
			minus *= -1;
			i++;
		}
		else if (nptr[i] == '+')
			i++;
		while (nptr[i] >= '0' && nptr[i] <= '9')
		{
			num = (num * 10) + (nptr[i] - 48);
			i++;
		}
		return (num * minus);
	}
	return (0);
}
