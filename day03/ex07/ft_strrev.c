/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaze <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:53:35 by lzaze             #+#    #+#             */
/*   Updated: 2020/06/23 12:17:12 by lzaze            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void	*ft_strrev(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	int		j;
	j = i;
	while (i >= 0)
	{
		str[j] = str[i];
		i--;
	}
	return (str);
}

int		main()
{
	char str;
	ft_strrev("abc");
	printf("%s\n",str);
	return 0;
}
