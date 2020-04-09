/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   printmap.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: conrodri <conrodri@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/20 13:40:08 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/04/08 17:33:34 by conrodri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		printmap(char **map, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (i < size)
		{
			while (j < size)
			{
				ft_putchar(map[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
			j = 0;
		}
	}
	return (0);
}
