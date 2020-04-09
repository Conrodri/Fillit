/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: conrodri <conrodri@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/02 15:50:50 by conrodri     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/09 18:06:12 by conrodri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUFF_SIZE 600
# include "./libft/libft.h"
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct		s_info
{
	int		diese;
	int		retour;
	int		point;
}					t_info;

typedef struct		s_fillit
{
	int		size;
	int		argc;
	char	**argv;
	int		taillej;
	int		nbform;
	int		**allxy;
	char	**map;
}					t_fillit;

typedef struct		s_args
{
	int		argc;
	char	**argv;
}					t_args;

int					ft_tests(char *str, int ret);
int					ft_testnum(char *str, int ret);
int					ft_testnumblock(char *str, t_info *info);
int					ft_testreturns(char *str);
int					ft_testforms(char *str, int ret);
int					main(int argc, char **argv);
int					*recupxy(char **str, int i, int j, int itab);
int					putform(int y, int x, t_fillit *fillit, int blocknb);
char				**leototab(char *str, int j);
int					findj(char *str);
char				**createmap(char **str, int i);
int					**creatallxy(int j, char **tab);
int					checkputform(int y, int x, int blocknb, t_fillit *fillit);
void				printallxy(int **allxy, int pos);
char				**firstmap(char **map);
int					printmap(char **map, int size);
char				**ft_up_map(char **map);
int					ft_fillit(t_fillit *fillit, int x, int y, int blocknb);
char				**ft_clean_previous_form(char **map, char *lettre,
					int blocknb);
#endif
