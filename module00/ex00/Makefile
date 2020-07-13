NAME =			megaphone

# SOURCES
SRC =			megaphone.cpp
SRC_PATH =		sources/

# Compilation
CLANG =			clang++

# Compilation flags
CLANGFLAGS =		-Werror -Wall -Wextra

all:
				@$(CLANG) $(CLANGFLAGS) $(SRC) -o $(NAME)
				@echo "\033[1;32mC'est fait !\033[m"

$(NAME):	all

fclean:
				@rm -rf $(NAME)
				@echo "\033[1;31mJ'efface beaucoup le MEGAPHONE </3\033[m"
clean:
				@rm -rf $(OBJS_PATH)
				@echo "\033[1;31mJ'efface le MEGAPHONE </3\033[m"

re:				fclean all

.PHONY:			all clean fclean re%