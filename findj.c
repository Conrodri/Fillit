/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   findj.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ledebut <ledebut@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/25 14:06:52 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/02/25 15:56:58 by ledebut     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		findj(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] != '\n' && str[i])
			i++;
		if (str[i - 1] == '\n' && str[i])
			i++;
		else
		{
			j++;
			i++;
		}
	}
	return (j);
}