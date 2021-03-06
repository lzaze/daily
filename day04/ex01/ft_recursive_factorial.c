/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaze <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 11:02:22 by lzaze             #+#    #+#             */
/*   Updated: 2020/06/25 11:16:05 by lzaze            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 1)
	{
		return 1;
	}

	else
	{
		nb = nb * (ft_recursive_factorial(nb - 1));
	}
	return (nb);
}
