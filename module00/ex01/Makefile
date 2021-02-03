NAME =			MAP

# SOURCES
SRC =			MAP.cpp Contact.class.cpp
SRC_PATH =		sources/

OBJS_PATH =		objs/
OBJS =			$(SRC:%.cpp=$(OBJS_PATH)%.o)

# Compilation
CLANG =			clang++

# Compilation flags
CLANGFLAGS =		-Werror -Wall -Wextra

all:			$(OBJS)
				@$(CLANG) $(CLANGFLAGS) $(OBJS) -o $(NAME)
				@echo "\033[1;32mC'est bon!\033[m"


$(OBJS_PATH)%.o: $(SRC_PATH)%.cpp
				$(CLANG) $(CLANGFLAGS) -c $< -o $@

$(OBJS):		$(OBJS_PATH)

$(OBJS_PATH):
				@echo "\033[1;32mCreation de MAP : \033[m"
				@mkdir objs

$(NAME):	all

fclean:			clean
				@rm -rf $(NAME)
				@echo "\033[1;31mJ'efface l'annuaire </3\033[m"
clean:
				@rm -rf $(OBJS_PATH)
				@echo "\033[1;31mJ'efface les objets </3\033[m"

re:				fclean all

.PHONY:			all clean fclean re%
