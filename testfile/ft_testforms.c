/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_testforms.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: conrodri <conrodri@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/05 19:22:12 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/04/09 16:17:40 by conrodri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../fillit.h"

int		checkos(char *str, int i, int ret, int tetro)
{
	tetro++;
	str[i] = '*';
	if ((i - 1 > 0) && str[i - 1] == '#')
		tetro = checkos(str, i - 1, ret, tetro);
	if (i + 1 < ret && str[i + 1] == '#')
		tetro = checkos(str, i + 1, ret, tetro);
	if (i - 5 > 0 && str[i - 5] == '#')
		tetro = checkos(str, i - 5, ret, tetro);
	if (i + 5 < ret && str[i + 5] == '#')
		tetro = checkos(str, i + 5, ret, tetro);
	return (tetro);
}

int		ft_testforms(char *str, int ret)
{
	int i;
	int tetro;

	tetro = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] != '#')
			i++;
		if (str[i] == '#')
		{
			tetro = checkos(str, i, ret, 0);
			if (tetro % 4 != 0)
				return (0);
		}
		i++;
	}
	return (1);
}
