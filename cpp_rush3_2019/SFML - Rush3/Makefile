##
## Sarah-Keppler
## Makefile
##

NAME	= htop

CC	= g++

RM	= rm -f

SRCS	= 	GKrellM.cpp	\
		Error.cpp	\
		Text.cpp	\
		MainModule.cpp	\
		Graph.cpp	\
		Plot/area.cpp	\
		Plot/axis.cpp	\
		Plot/curve.cpp	\
		Plot/grid.cpp	\
		Plot/line.cpp	\
		Plot/plot.cpp	\
		SModuleDisk.cpp	\
		SModuleNetwork.cpp	\
		SModuleOs.cpp	\
		SModuleRam.cpp	\
		SModuleCPU.cpp	\
		SModuleHearts.cpp	\
		main.cpp

CXXFLAGS += -Wall -Wextra -g
#-Werror -g

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) -o $(NAME) $(CXXFLAGS) $(SRCS) -lsfml-window -lsfml-graphics -lsfml-system

clean:
	$(RM) *~ vgcore.*

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
