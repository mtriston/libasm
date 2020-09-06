OS = $(shell uname)

NAME = libasm.a

SRC_DIR = srcs/
OBJ_DIR = bin/
HEADER = libasm.h

ACC = nasm

ifeq ($(OS), Linux)
	AFLAGS = -f elf64
else
	AFLAGS = -f macho64
endif

CC = clang
CFLAGS = -Wall -Wextra -Werror

FILES = ft_strlen ft_strcpy ft_strcmp ft_write ft_read ft_strdup

SRC_FILES = $(addsuffix .s, $(addprefix $(SRC_DIR), $(FILES)))

OBJ_FILES = $(addsuffix .o, $(addprefix $(OBJ_DIR), $(FILES)))

all: $(OBJ_DIR) $(NAME)

$(NAME): $(OBJ_FILES)
	@ar rcs $(NAME) $(OBJ_FILES)
	@echo "$(NAME) is assembled."

$(OBJ_FILES): $(OBJ_DIR)%.o : $(SRC_DIR)%.s $(HEADER)
	@$(ACC) $(AFLAGS) $< -o $@
	@echo "$(@) is compiled"

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)
	@echo "Object files have been removed"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(NAME) has been removed"

re: fclean all

bonus: all
	
test: all
	@$(CC) $(CLAGS) ./test/*.c -o check_me -L. -lasm
	@./check_me
