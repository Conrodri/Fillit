/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_testreturns.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: conrodri <conrodri@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/12 11:44:58 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/04/08 18:15:07 by conrodri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../fillit.h"

int		ft_testreturns(char *str)
{
	static int i;
	static int j;
	static int chars;

	while (str[i])
	{
		chars = 0;
		if (str[i] == '\n')
		{
			i++;
			j++;
		}
		while (i != (20 * (j + 1)) + j - 1 && str[i] != '\n')
		{
			chars++;
			i++;
		}
		if (chars != 4)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
