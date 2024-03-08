# Compiler
CC = cc
# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Name of the output library
NAME = libft.a

# Automatically list all C source files in the current directory
SRCS = $(wildcard *.c)
# Object files
OBJS = $(SRCS:.c=.o)

# Default rule
all: $(NAME)

# Rule for creating the static library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Rule to prevent unnecessary relinks
.PHONY: all clean fclean re

# Rule to clean object files
clean:
	rm -f $(OBJS)

# Rule to clean everything (object files + library)
fclean: clean
	rm -f $(NAME)

# Rule to re-make everything
re: fclean all
