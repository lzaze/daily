/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaze <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 10:35:19 by lzaze             #+#    #+#             */
/*   Updated: 2020/06/26 13:38:34 by lzaze            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void	ft_ft(int *nbr)
{
	int		nb;
	nb = 42;
	nbr = &nb;
	printf("%d", *nbr);
}

int main()
{
	int *nb;
	ft_ft(nb);
	return 0;
}
