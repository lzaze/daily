/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaze <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 09:50:57 by lzaze             #+#    #+#             */
/*   Updated: 2020/06/21 09:45:10 by lzaze            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	w;
	char	x;
	char	y;
	char	z;

	w = '0';
	while (w <= '9')
	{
		x = '0';
		while (x <= '8')
		{
			y = '0';
			while (y <= '9')
			{
				z = x + 1;
				while (z <= '9')
				{
					if (!(w == y && x == z))
					{
						ft_putchar(w);
						ft_putchar(x);
						ft_putchar(' ');
						ft_putchar(y);
						ft_putchar(z);
						if (!(w == '9' && x == '8' && y == '9' && z =='9'))
						{
							ft_putchar(',');
							ft_putchar(' ');
						}
						else
						{
							ft_putchar('\n');
							return;
						}
					}
					z++;
				}
				y++;
			}
			x++;
		}
		w++;
	}
}

int		main()
{
	ft_print_comb2();
	return 0;
}
