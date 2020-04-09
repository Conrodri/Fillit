/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   leototab.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: conrodri <conrodri@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/25 13:58:10 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/02/25 21:04:20 by conrodri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

char	**split(int i, char *str, int j, char **mapp)
{
	int k;
	int l;

	k = 0;
	l = 0;
	while (k < j)
	{
		while (str[i] != '\n' && str[i])
		{
			mapp[k][l] = str[i];
			l++;
			i++;
		}
		if (str[i + 1] == '\n' || str[i + 1] == '\0')
			i = i + 2;
		else
			i++;
		k++;
		l = 0;
	}
	return (mapp);
}

char	**leototab(char *str, int j)
{
	int		i;
	int		k;
	int		l;
	char	**mapp;

	i = 0;
	k = 0;
	l = 0;
	if (!(mapp = (char**)malloc(sizeof(char*) * (j + 1))))
		return (0);
	while (k < j)
	{
		mapp[k] = ft_strnew(5);
		mapp[k][4] = '\0';
		k++;
	}
	k = 0;
	if (k < j)
		mapp = split(i, str, j, mapp);
	return (mapp);
}
