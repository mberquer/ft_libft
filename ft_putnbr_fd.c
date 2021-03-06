/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:25:26 by mberquer          #+#    #+#             */
/*   Updated: 2021/12/07 15:45:15 by mberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	n2;

	n2 = (long int)n;
	if (n2 < 0)
	{
		ft_putchar_fd('-', fd);
		n2 *= -1;
	}
	if (n2 / 10 != 0)
		ft_putnbr_fd(n2 / 10, fd);
	ft_putchar_fd((n2 % 10) + 48, fd);
}
