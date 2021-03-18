NAME =			serialize

# SOURCES
SRC =			Data.cpp
SRC_PATH =		./

OBJS_PATH =		objs/
OBJS =			$(SRC:%.cpp=$(OBJS_PATH)%.o)

# Compilation
CLANG =			clang++

# Compilation flags
CLANGFLAGS =		-Werror -Wall -Wextra


$(NAME):		$(OBJS)
				@$(CLANG) $(CLANGFLAGS) $(OBJS) -o $(NAME)
				@echo "\033[1;32mC'est bon!\033[m"

all:			$(NAME)

$(OBJS_PATH)%.o: $(SRC_PATH)%.cpp
				$(CLANG) $(CLANGFLAGS) -c $< -o $@

$(OBJS):		|$(OBJS_PATH)

$(OBJS_PATH):
				@echo "\033[1;32mCreation de '"serialize"' : \033[m"
				@mkdir $(OBJS_PATH)

fclean:			clean
				@rm -rf $(NAME)
				@echo "\033[1;31mJ'efface '"serialize"' </3\033[m"
clean:
				@rm -rf $(OBJS_PATH)
				@echo "\033[1;31mJ'efface les objets </3\033[m"

re:				fclean all

.PHONY:			all clean fclean re%
