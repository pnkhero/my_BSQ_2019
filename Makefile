##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC =	load_totab.c 		\
		do_algo.c			\
		load_chartab.c		\
		my_putchar.c		\
		my_putstr_error.c	\
		my_putstr.c			\
		my_strlen_col.c		\
		my_strlen_lines.c	\
		my_strlen.c			\
		openreadbsq.c		\
		rm_firstline.c		\
		my_chartoint.c		

OBJ = $(SRC:.c=.o)

NAME = bsq

CFLAGS = -g3

all: $(NAME)

$(NAME):   $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
