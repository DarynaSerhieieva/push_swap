NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = ./includes
LIBFT_DIR = ./libft
SRC_DIR		= ./src/
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_INC = -I$(INCLUDES)

# Source files and object files
SRC_FILES	= push_swap list_validation utils \
			ft_swap ft_push ft_reverse_rotate \
			ft_rotate ft_sort ft_sort_b ft_sort_small
SRC = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ = $(SRC:.c=.o)

# Main target
all: $(NAME)

# To link with the required internal Linux API:
$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(OBJ) $(LIBFT) -o $(NAME)

# Compile object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(LIBFT_INC)

# Compile libft
$(LIBFT):
	make -C $(LIBFT_DIR)

# Clean object files
clean:
	rm -f $(OBJ)
	make clean -C $(LIBFT_DIR)

# Clean object files and executables
fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)

# Recompile everything
re: fclean all
	make re -C $(LIBFT_DIR)
