/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_testnumblock.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: conrodri <conrodri@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/06 02:56:13 by ledebut      #+#   ##    ##    #+#       */
/*   Updated: 2019/04/08 19:17:03 by conrodri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../fillit.h"

t_info	*reset_struct(t_info *info)
{
	info->diese = 0;
	info->retour = 0;
	info->point = 0;
	return (info);
}

void	ft_wrongnumber(void)
{
	ft_putstr("error");
	exit(1);
}

int		ft_testresult(t_info *info)
{
	if (info->diese != 4)
		return (0);
	if (info->point != 12)
		return (0);
	if (info->retour != 3)
		return (0);
	return (1);
}

int		ft_testnumblock(char *str, t_info *info)
{
	static int i;
	static int j;

	j = -1;
	while (str[i])
	{
		j++;
		info = reset_struct(info);
		while (str[i] != '\n' || (str[i + 1] != '\n' && str[i + 1] != '\0'))
		{
			if (str[i] == '#')
				info->diese++;
			if (str[i] == '.')
				info->point++;
			if (str[i] == '\n')
				info->retour++;
			i++;
		}
		if (ft_testresult(info) == 0)
			ft_wrongnumber();
		if (str[i + 1] == '\0')
			return (1);
		i = i + 2;
	}
	return (1);
}
