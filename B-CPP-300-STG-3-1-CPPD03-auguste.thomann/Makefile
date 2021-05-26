##
## EPITECH PROJECT, 2021
## B-CPP-300-STG-3-1-CPPD03-auguste.thomann
## File description:
## Makefile
##

SRC				=   ex00.c				\
					ex01.c				\
					ex02.c				\
					ex03.c				\
					ex04.c				\
					ex05.c				\
					ex06.c				\
					ex07.c				\
					ex08.c				\
					ex09.c				\
					ex10.c				\
					ex11.c				\
					ex12.c				\
					ex13.c				\
					ex14.c				\
					ex15.c				\
					ex16.c				\

OBJ				= 	$(SRC:.c=.o)
NAME_LIB		= 	libstring.a
NAME_INCLUDE 	=	string.h

CFLAGS			=	-std=gnu11 -Wall -Wextra

all: $(NAME_LIB)

$(NAME_LIB): $(OBJ)
	@ar rc $(NAME_LIB) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f ./$(NAME_LIB)

re: fclean all

.PHONY: all my clean fclean re