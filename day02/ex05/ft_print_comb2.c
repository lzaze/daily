/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaze <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 09:50:57 by lzaze             #+#    #+#             */
/*   Updated: 2020/06/19 10:54:35 by lzaze            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;

	i = '0';
	j = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			ft_putchar(i);
			ft_putchar(j);

			if (i == '9' && j == '9')
			{
				ft_putchar('\n');
				return;
			}
			else
			{
				ft_putchar(',');
				j++;
			}
		}
		i++;
	}
}
