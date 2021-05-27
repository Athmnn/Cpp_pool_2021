##
## Sarah-Keppler
## Makefile
##

NAME	= htop

CC	= g++

RM	= rm -f

SRCS	=	SModuleOs.cpp	\
		SModuleDisk.cpp	\
		SModuleNetwork.cpp	\
		SModuleRam.cpp	\
		SModuleCPU.cpp	\
		MonitorNcurses.cpp	\
		main.cpp

CXXFLAGS += -Wall -Wextra -g
#-Werror -g

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) -o $(NAME) $(CXXFLAGS) $(SRCS) -lncurses

clean:
	$(RM) *~ vgcore.*

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
