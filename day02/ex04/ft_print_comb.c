/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaze <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 10:05:37 by lzaze             #+#    #+#             */
/*   Updated: 2020/06/18 11:08:40 by lzaze            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);

				if (i == '7' && j == '8' && k == '9')
				{
					break;
				}
				
				else
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}
