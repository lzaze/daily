/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaze <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 11:28:00 by lzaze             #+#    #+#             */
/*   Updated: 2020/06/25 13:09:33 by lzaze            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_recursive_power(int nb, int power)
{
	int		ans;
	if (power != 0)
	{
		ans  = nb * ft_recursive_power((nb), (power - 1));
		return ans;
	}
	return ans;
}


int main()
{
	printf("%d", ft_recursive_power(2, 3));
	return 0;
}
