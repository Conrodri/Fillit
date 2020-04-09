/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   createmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <ledebut@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/25 14:25:04 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/03/29 05:38:39 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

char	**createmap(char **str, int i)
{
	int		j;
	char	**map;

	j = 0;
	if (!(map = (char**)malloc(sizeof(char*) * 5)))
		return (0);
	while (j < 4)
	{
		map[j] = ft_strnew(5);
		map[j] = str[i];
		j++;
		i++;
	}
	map[4] = NULL;
	return (map);
}
