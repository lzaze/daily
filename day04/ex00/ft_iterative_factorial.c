/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaze <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 10:47:34 by lzaze             #+#    #+#             */
/*   Updated: 2020/06/25 11:00:41 by lzaze            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_iterative_factorial(int b)
{
	int		ans;
	ans = b;

	while (b > 1)
	{
		ans = ans * (b - 1);
		b--;
	}
	return ans;
}