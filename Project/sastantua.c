/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaze <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:10:07 by lzaze             #+#    #+#             */
/*   Updated: 2020/06/26 14:10:18 by lzaze            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdlib.h>

int width_per_level(int i)
{
	if(i == 0)	
		return(7);
	return(width_per_level(i - 1) + 2 * (1 +(3 + i) +(i % 2)+(i / 2)));
}
void level(int height, int width, int gap_diff, int size)
{
	int i;
	int j;
	int k;

	k = 0;
	i = 0;
	while (i<height)
	{
		j = -gap_diff;
		while(j < height - 1 - i)
		{
			write(1, " ", 1);
			j++;
		}
		j += height + 1 - i;
		write(1, "/", 1);
		while(j < width)
		{
			if (((height - 2) == size) && i > 1 && j == (width/2 + size/2 + 1))
			{
				while(k < size)
				{
					write(1, "|", 1);
					j++;
					k++;
				}

				k = 0;
			}
			else
			{
				write(1, "*", 1);
				j++;
			}
		}
		write(1, "\\", 1);
		write(1, "\n", 1);
		i++;
	}
}
void sastantua(int size)
{
	int i;
	int height;
	int width;
	int gap_diff;

	i = 0;

	while(i<size)
	{
		gap_diff =(width_per_level(size - 1)- width_per_level(i)) / 2;
		height = 3 + i; 
		width = width_per_level(i);
		level(height, width, gap_diff, size);
		i++;
	}
}

int main(int argc, char **argv)
{
	(void)argc;
	sastantua(atoi(argv[1]));
	return 0;
}
