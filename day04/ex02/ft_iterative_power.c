/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaze <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 11:17:29 by lzaze             #+#    #+#             */
/*   Updated: 2020/06/25 11:26:01 by lzaze            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		ans;

	ans = nb;
	while (power > 1)
	{
		ans = ans * nb;
		power--;
	}
	
	return (ans);
}
