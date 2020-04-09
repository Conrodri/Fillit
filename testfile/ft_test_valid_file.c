/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_test_valid_file.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: conrodri <conrodri@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/30 08:10:11 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/04/09 16:18:43 by conrodri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../fillit.h"

int		ft_testnumb(int ret)
{
	if (ret == 0)
	{
		return (0);
	}
	if ((ret + 1) % 21 != 0)
	{
		return (0);
	}
	return (1);
}

int		ft_testchars(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
		{
			return (0);
		}
		else
			i++;
	}
	return (1);
}

int		ft_testlines(char *str, int ret)
{
	int i;
	int j;
	int blocks;

	i = 0;
	j = 0;
	blocks = (ret + 1) / 21;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			if (str[i + 1] == '\n' || str[i + 1] == '\0')
				j++;
		}
		i++;
	}
	if (j != blocks)
	{
		return (0);
	}
	return (1);
}

char	*bringbackash(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '*')
			str[i] = '#';
		i++;
	}
	return (str);
}

int		ft_tests(char *str, int ret)
{
	t_info *info;

	info = malloc(sizeof(t_info));
	info->diese = 0;
	info->point = 0;
	info->retour = 0;
	if (ft_testnumb(ret) == 0)
		return (0);
	if (ft_testchars(str) == 0)
		return (0);
	if (ft_testlines(str, ret) == 0)
		return (0);
	if (ft_testnum(str, ret) == 0)
		return (0);
	if (ft_testnumblock(str, info) == 0)
		return (0);
	if (ft_testreturns(str) == 0)
		return (0);
	if (ft_testforms(str, ret) == 0)
		return (0);
	str = bringbackash(str);
	return (1);
}
