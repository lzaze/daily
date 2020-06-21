/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaze <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 11:11:11 by lzaze             #+#    #+#             */
/*   Updated: 2020/06/20 10:48:09 by lzaze            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		i;
	int 	tn;
	int		number
	tn = nb;
	i = 0;
	number = 0;
	while (number == 0)
	{
		if (!(tn < 10))
		{
			tn = tn / 10;
			i += 1;
		}
		else
		{
			number = 1;
		}
	}

	while (nb[i] != '\0')
	{
		ft_putchar(nb[i]+48);
		i++
	}
}

int main()
{
	ft_putnbr(42);
	return 0;
}
