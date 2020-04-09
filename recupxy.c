/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   recupxy.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <ledebut@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/05 15:17:06 by conrodri     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/29 06:00:29 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		*modify(int *str)
{
	int i;
	int j;
	int ymin;

	i = 0;
	j = 0;
	ymin = 1000;
	while (i < 8)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7)
			if (ymin >= str[i])
				ymin = str[i];
		i++;
	}
	i = 0;
	while (i < 8)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7)
		{
			str[i] = str[i] - ymin;
		}
		i++;
	}
	return (str);
}

int		*modifx(int *str)
{
	int i;
	int j;
	int xmin;

	i = 0;
	j = 0;
	xmin = 1000;
	while (i < 8)
	{
		if (i == 0 || i == 2 || i == 4 || i == 6)
			if (xmin >= str[i])
				xmin = str[i];
		i++;
	}
	i = 0;
	while (i < 8)
	{
		if (i == 0 || i == 2 || i == 4 || i == 6)
		{
			str[i] = str[i] - xmin;
		}
		i++;
	}
	return (str);
}

int		*recupxy(char **str, int i, int j, int itab)
{
	int *stock;

	if (!(stock = malloc(sizeof(int) * 8)))
		return (0);
	while (str[++j])
	{
		while (str[j][i])
		{
			if (str[j][i] == '#')
			{
				stock[itab] = i;
				itab++;
				stock[itab] = j;
				itab++;
			}
			i++;
		}
		i = 0;
	}
	i = 0;
	stock = modifx(stock);
	stock = modify(stock);
	return (stock);
}
