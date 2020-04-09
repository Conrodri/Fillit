/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   checkputform.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: conrodri <conrodri@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/27 16:42:11 by conrodri     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/08 17:57:05 by conrodri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		checkputform(int y, int x, int blocknb, t_fillit *fillit)
{
	int j;

	j = 0;
	while (j < 8)
	{
		if ((fillit->map[y + fillit->allxy[blocknb][j + 1]]
		[x + fillit->allxy[blocknb][j]] != '.')
			|| (y + fillit->allxy[blocknb][j + 1] >= fillit->size)
			|| (x + fillit->allxy[blocknb][j] >= fillit->size))
			return (0);
		else
			j += 2;
	}
	return (1);
}
