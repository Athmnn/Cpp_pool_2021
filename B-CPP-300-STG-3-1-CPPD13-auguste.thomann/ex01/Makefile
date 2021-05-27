##
## Makefile for ex01 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex01
##
## Made by 
## Login   <>
##
## Started on  Tue Jan 19 18:32:16 2021 
## Last update Wed Jan 19 18:32:18 2021 
##

NAME    :=      Toy

CC	:=	g++
CPP	:=	.cpp

_FILES  :=      main  		\
				Picture		\
				Toy			\

_FILES_	:=	$(addsuffix $(C), $(_FILES))

OBJ     :=      $(_FILES_:$(C)=.o)

CFLAGS	+=	-I./include -Wall -Wextra -g

COLOR   :=      \033[01;38;5;31m

WHITE   :=      \033[0;0m

CLEAR   :=      \033[2K

all:    $(NAME)

$(NAME):         make_all $(OBJ)
	@$(CC)  $(OBJ) -o $(NAME) $(LDFLAGS)
	@echo -e "$(CLEAR)$(NAME) : $(COLOR)OK$(WHITE)"
	@echo -e "\033[01;38;5;154m========================== Compiling : Done\033[0;0m"

%.o:    %.cpp
	@$(CC) -g -o $@ -c $< $(CFLAGS) $(CPP_VERSION)
	@echo -ne "$(CLEAR)Compiled $< : $(COLOR)OK$(WHITE)\r"

clean:  make_clean
	@rm -f $(NAME)
	@rm -f vgcore*
	@echo -e "$(NAME) \033[01;38;5;220m'.o' Deletion : DONE$(WHITE)"

fclean: clean
	@rm -f $(OBJ)
	@echo -e "'$(NAME)' \033[01;38;5;222mdeletion : DONE$(WHITE)"
	@echo -e "\033[01;38;5;154m========================== start Compiling :\033[0;0m"

re:     fclean  all

make_all:
	@for makefile in $(_MAKEFILES); do      \
	$(MAKE) --no-print-directory -C lib/$$makefile; \
	done

make_clean:
	@for makefile in $(_MAKEFILES); do      \
	$(MAKE) --no-print-directory -C lib/$$makefile clean;   \
		done

make_fclean:
	@for makefile in $(_MAKEFILES); do      \
	$(MAKE) --no-print-directory -C lib/$$makefile fclean;  \
		done

clean_all: fclean make_fclean

run: all
	@./$(NAME)

test: re
	@./$(NAME)

val: re
	@valgrind ./$(NAME)

rebuild: make_fclean fclean all

.PHONY: $(NAME) clean fclean re test
