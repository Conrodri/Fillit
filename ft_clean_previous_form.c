/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_clean_previous_form.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <ledebut@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/28 20:25:06 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/03/29 04:37:17 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_clean_previous_form(char **map, char *lettre, int blocknb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (map[i])
	{
		while (map[i][j])
		{
			if (map[i][j] == lettre[blocknb - 1])
				map[i][j] = '.';
			else
				j++;
		}
		j = 0;
		i++;
	}
	return (map);
}
