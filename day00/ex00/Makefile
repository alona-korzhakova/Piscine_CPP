NAME = megaphone

C = clang++

CFLAG = -Wall -Wextra -Werror

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

# Colors constants
RED = \033[31m

YELLOW = \033[93m

GREEN = \033[38;5;82m

BLUE = \033[1;34m

RESET = \033[0m

.PHONY: all clean fclean

all: $(NAME)

$(NAME): $(OBJ)
	@$(C) $(CFLAG) $(OBJ) -o $(NAME)
	@echo "$(GREEN)$(NAME) compilation is done$(RESET)"

%.o: %.cpp
	@$(C) $(CFLAG) -o $@ -c $<

clean:
	@rm -f $(OBJ)
	@echo "$(YELLOW)object files have been cleaned$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)$(NAME) has been removed$(RESET)"

re: fclean all
