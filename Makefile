##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile printf
##

SRC	=	functions/my_getnbr.c 	\
		functions/my_putchar.c 	\
		functions/my_strlen.c 	\
		functions/my_putstr.c 	\
		functions/my_put_nbr.c 	\
		src/mem_alloc_array.c  	\
		src/load_file_mem.c 	\
		src/load_arr_from_file.c 	\
		src/bsq.c 	\
		src/main.c	\
		src/my_size.c 	\
		src/my_column.c 	\

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

CFLAGS	+=	-I./include -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)
	rm -f functions/*.o src/*.o

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
