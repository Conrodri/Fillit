# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: conrodri <conrodri@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/09 15:24:03 by conrodri     #+#   ##    ##    #+#        #
#    Updated: 2019/04/10 18:16:06 by conrodri    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #


NAME = fillit

FLAGS = -Wall -Wextra -Werror

SRC =	./testfile/ft_testnum.c\
		./testfile/ft_testnumblock.c\
		./testfile/ft_testreturns.c\
		./testfile/ft_testforms.c\
		./testfile/ft_test_valid_file.c\
		main.c\
		recupxy.c\
		createmap.c\
		leototab.c\
		ft_up_map.c\
		ft_clean_previous_form.c\
		ft_fillit.c\
		putform.c\
		findj.c\
		creatallxy.c\
		checkputform.c\
		firstmap.c\
		printmap.c\


OBJ = $(subst .c,.o,$(SRC))

LIGHT_PINK = \033[0;38;5;200m

PINK = \033[0;38;5;198m

DARK_BLUE = \033[0;38;5;110m

GREEN = \033[0;38;5;111m

LIGHT_GREEN = \033[0;38;5;121m

FLASH_GREEN = \033[33;32m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(DARK_BLUE)\nFichiers de "$(NAME)" compilés\n"
	@echo "$(LIGHT_GREEN)Compilation de la Libft : "
	@make -C libft/
	@gcc $(FLAGS) -o $(NAME) $(OBJ) -I libft/includes -L libft/ -lft
	@echo "$(FLASH_GREEN)Programme "$(NAME)" compilé et prêt à l'usage !"

%.o: %.c fillit.h
	@gcc $(FLAGS) -I libft/includes -o $@ -c $<
	@echo "$(DARK_BLUE).\c"

clean:
	@rm -rf $(OBJ)
	@make -C libft/ clean
	@echo "$(LIGHT_PINK)Suppression des .o de "$(NAME)""

fclean: clean
	@rm -rf $(NAME)
	@make -C libft/ fclean
	@echo "$(PINK)Suppression de" $(NAME)""

re: fclean all
