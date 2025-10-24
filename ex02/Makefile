# NAME      := Array
# CPP       := c++
# CPPFLAGS  := -Wall -Wextra -Werror -std=c++98

# SRC       := main.cpp Array.tpp
# OBJ_DIR   := obj
# OBJ       := $(addprefix $(OBJ_DIR)/,$(SRC:.tpp=.o))

# all: $(NAME)

# $(OBJ_DIR):
# 	@mkdir -p $@

# $(OBJ_DIR)/%.o: %.tpp | $(OBJ_DIR)
# 	$(CPP) $(CPPFLAGS) -c $< -o $@

# $(NAME): $(OBJ)
# 	$(CPP) $(CPPFLAGS) $^ -o $@

# clean:
# 	$(RM) -r $(OBJ_DIR)

# fclean: clean
# 	$(RM) $(NAME)

# re: fclean all

# .PHONY: all clean fclean re%   

C++ = c++
C++_FLAGS = -Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address
INFILES = 	main.cpp\

OBJFILES = $(INFILES:.cpp=.o)

NAME = Array

all: $(NAME)

$(NAME):$(OBJFILES)
	$(C++) $(C++_FLAGS) $(OBJFILES) -o $(NAME) 

%.o: %.cpp
	$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re