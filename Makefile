CHECKER : checker
NAME: push_swap
GCC : gcc 
CFLAGS: -Wall -Wetra -Werror

RM = rf
RMFLAGS = -rf
INCLUDE = include
CFLAGS += -I $(INCLUDE)
OBJS_DIR = obj

#libft
LIBFT = libft.a
LIBFT_DIR = libft
LIBFT_FILE = libft/$(LIBFT)
LIBFT_FLAGS = -L libft -lft

#source files
HEADER = $(INCLUDE)/push_swap.h
STACK_SRC = $(wildcard(stack_operation/*.c))
ALGORITHM_SRC = $(wildcard(algorithm/*.c))
ALGORITHM_SRC += $(STACK_SRC)
PUSH_SWAP_OBJ = $(addprefix(OBJS_DIR)/, $(notdir $(ALGORITHM_SRC:.c =.o)))

#rule target
all : $(NAME)

clean : 
		@$(RM) $(RMFLAGS) $(OBJS_DIR)

fclean : clean
		@$(RM) $(RMFLAGS) $(NAME)

re : fclean all

$(OBJS_DIR) :
		@mkdir $(OBJS_DIR)

$(OBJS_DIR)/%.o : %.c $(LIBFT_FILE) | $(OBJS_DIR)
			@$(GCC) $(CFLAGS) -c $< -o $@

$(NAME) :	$(LIBFT_FILE) $(HEADER) $(PUSH_SWAP_OBJ) push_swap.c
		@$(GCC) $(CFLAGS) $(LIBFT_FLAGS) $(PUSH_SWAP_OBJ) push_swap.c

#libft compile
$(LIBFT) : $(LIBFT_FILE)

$(LIBFT_FILE) :
		@make --no-print-directory -C $(LIBFT_DIR)

$(LIBFT)_clean :
		@make --no-print-directory -C $(LIBFT_DIR) clean

$(LIBFT)_fclean :
		@make --no-print-directory -C $(LIBFT_DIR) fclean

.PHONY: all clean fclean re test \
		$(LIBFT) $(LIBFT)_clean $(LIBFT)_fclean