/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   creatallxy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: conrodri <conrodri@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/25 18:04:23 by conrodri     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/28 17:00:07 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		**creatallxy(int j, char **tab)
{
	int		i;
	int		k;
	int		**allxy;
	char	**map;

	k = 0;
	i = 0;
	if (!(allxy = (int**)malloc(sizeof(int*) * (j / 4))))
		return (0);
	k = 0;
	while (i < (j / 4))
	{
		map = createmap(tab, k);
		allxy[i] = recupxy(map, 0, -1, 0);
		i++;
		k = k + 4;
	}
	return (allxy);
}
