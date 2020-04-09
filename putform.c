/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   putform.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: conrodri <conrodri@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/20 11:07:31 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/04/08 17:55:40 by conrodri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		putform(int y, int x, t_fillit *fillit, int blocknb)
{
	int		j;
	char	lettre;

	lettre = 'A' + blocknb;
	j = 0;
	while (j < 8)
	{
		fillit->map[y + fillit->allxy[blocknb][j + 1]]
		[x + fillit->allxy[blocknb][j]] = lettre;
		j = j + 2;
	}
	return (1);
}
