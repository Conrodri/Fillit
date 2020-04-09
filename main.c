/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: conrodri <conrodri@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/02 15:49:24 by conrodri     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/11 19:02:36 by conrodri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

char		**malloc200200(char **map)
{
	int i;
	int j;

	i = 0;
	j = 0;
	map = malloc(sizeof(char*) * 201);
	while (j < 200)
	{
		map[j] = malloc(sizeof(char) * 200);
		j++;
	}
	map[j] = NULL;
	return (map);
}

int			**allxycrea(char *buf, int taillej)
{
	int		**allxy;

	allxy = creatallxy(taillej, leototab(buf, taillej));
	return (allxy);
}

t_fillit	*init_struct(char *buf, int argc, char **argv)
{
	t_fillit *fillit;

	fillit = malloc(sizeof(t_fillit));
	fillit->map = malloc200200(fillit->map);
	fillit->argc = argc;
	fillit->argv = argv;
	fillit->taillej = findj(buf);
	fillit->nbform = fillit->taillej / 4;
	fillit->size = 2;
	fillit->allxy = allxycrea(buf, fillit->taillej);
	fillit->map = firstmap(fillit->map);
	return (fillit);
}

int			checkfile(int fd, int ret, t_args *fillit, char *buf)
{
	if (fillit->argc == 2)
	{
		fd = open(fillit->argv[1], O_RDONLY);
		if (fd < 0)
		{
			ft_putstr("error\n");
			return (0);
		}
		ret = read(fd, buf, BUFF_SIZE);
		if (ret > 545)
		{
			ft_putstr("error\n");
			return (0);
		}
		buf[ret] = '\0';
		if (ft_tests(buf, ret) == 0)
		{
			ft_putstr("error\n");
			return (0);
		}
		return (1);
	}
	ft_putstr("error\n");
	return (0);
}

int			main(int argc, char **argv)
{
	char		buf[BUFF_SIZE + 1];
	int			ret;
	int			fd;
	t_fillit	*fillit;
	t_args		*args;

	args = malloc(sizeof(t_args));
	args->argc = argc;
	args->argv = argv;
	if (argc != 2)
	{
		ft_putstr("error\n");
		return (0);
	}
	ret = 0;
	fd = open(argv[1], O_RDONLY);
	ret = read(fd, buf, BUFF_SIZE);
	if (checkfile(fd, ret, args, buf) == 0)
		return (0);
	fillit = init_struct(buf, argc, argv);
	while (ft_fillit(fillit, -1, -1, 0) == 0)
		fillit->size++;
	return (0);
}
