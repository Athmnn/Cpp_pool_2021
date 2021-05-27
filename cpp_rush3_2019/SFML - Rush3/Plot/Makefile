##
## Sarah-Keppler
## Makefile
##

NAME	= htop

CC	= g++

RM	= rm -f

SRCS	= 	area.cpp	\
		axis.cpp	\
		curve.cpp	\
		grid.cpp	\
		line.cpp	\
		plot.cpp

CXXFLAGS += -Wall -Wextra -g

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) -o $(NAME) $(CXXFLAGS) $(SRCS) -lsfml-window -lsfml-graphics -lsfml-system

clean:
	$(RM) *~ vgcore.*

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
