/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_testnum.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: conrodri <conrodri@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/06 02:38:13 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/04/08 18:15:19 by conrodri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../fillit.h"

int		ft_test(int diese, int point, int retour, int j)
{
	if ((diese / j) != 4 && (diese % 4) != 0)
		return (0);
	if ((point / j) != 12 && (point % 12) != 0)
		return (0);
	if (((((retour - j)) / j) != 4) && (((retour - j) % 4) != 0))
		return (0);
	return (1);
}

int		ft_testnum(char *str, int ret)
{
	static int diese;
	static int point;
	static int retour;
	static int i;
	static int j;

	j = (ret % 40);
	while (i <= ret)
	{
		if (str[i] == '#')
			diese++;
		if (str[i] == '.')
			point++;
		if (str[i] == '\n')
			retour++;
		i++;
	}
	if (ft_test(diese, point, retour, j) == 0)
	{
		return (0);
	}
	return (1);
}
