/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_up_map.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: conrodri <conrodri@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/20 14:10:08 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/03/29 22:47:38 by conrodri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void	create_new_line(char **map, int k, int a)
{
	int i;
	int j;
	int l;

	i = 0;
	j = 0;
	l = k;
	while (i <= l / a)
	{
		map[l / a][i] = '.';
		i++;
	}
}

char	**ft_up_map(char **map)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (map[i][0] != '*')
	{
		while (map[i][j] != '*')
		{
			map[i][j] = '.';
			j++;
			k++;
		}
		if (map[i][j] == '*' && j != 0)
		{
			map[i][j] = '.';
			i++;
			j = 0;
		}
	}
	create_new_line(map, k, i);
	return (map);
}
