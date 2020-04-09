/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_fillit.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: conrodri <conrodri@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/21 15:56:06 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/04/08 19:21:42 by conrodri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void	ft_rm_actual_form(char **map, char lettre, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < size)
	{
		while (i < size)
		{
			if (map[j][i] == lettre)
				map[j][i] = '.';
			i++;
		}
		i = 0;
		j++;
	}
}

int		ft_fillit(t_fillit *fillit, int x, int y, int blocknb)
{
	char lettre;

	lettre = 'A' + blocknb;
	while (++y < fillit->size)
	{
		while (++x < fillit->size)
		{
			if (checkputform(y, x, blocknb, fillit) != 0)
			{
				putform(y, x, fillit, blocknb);
				if (blocknb + 1 == fillit->nbform)
				{
					printmap(fillit->map, fillit->size);
					return (1);
				}
				else if (ft_fillit(fillit, -1, -1, blocknb + 1) == 1)
					return (1);
				else
					ft_rm_actual_form(fillit->map, lettre, fillit->size);
			}
		}
		x = -1;
	}
	return (0);
}
