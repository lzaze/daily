/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaze <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 09:09:30 by lzaze             #+#    #+#             */
/*   Updated: 2020/06/23 09:09:57 by lzaze            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int mod;
	if (nb <= 9 && nb >= 0)
	{
		ft_putchar('0' + nb);
	}

	else if (nb >= 10)
	{
		mod = (nb % 10);
		nb = (nb / 10);
		ft_putnbr(nb);
		ft_putchar('0' + mod);
	}

	else
	{
		ft_putchar('-');
		nb = nb * -1;
		ft_putnbr(nb);
	}
}
