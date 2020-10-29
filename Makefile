# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: zilisabethpangasch <zilisabethpangasch@      +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/21 11:50:12 by zilisabethp   #+#    #+#                  #
#    Updated: 2020/10/29 15:27:33 by pani_zino     ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

RED = \033[1;38;5;168m
BLU = \033[3;38;5;146m
RES = \033[0m

NAME := libasm.a

SRC := ft_read.s ft_strcmp.s ft_strcpy.s \
 ft_strlen.s ft_write.s ft_strdup.s ft_list_size.s

FLAGS := -Wall -Wextra -Werror -fsanitize=address

OBJ := $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(RED)\nCompiling library\n$(RES)"
	@ar rcs $(NAME) $(OBJ)

%.o: %.s
	@echo "$(BLU)Generating .o files$(RES)"
	@nasm -f macho64 -o $@ $<

test: all
	@echo "$(RED)\nRunning test\n$(RES)"
	@gcc $(FLAGS) -o test $(NAME) main.c && ./test && rm ./test && make fclean

clean:
	@echo "$(RED)\nRemoving .o files\n$(RES)"
	@$(RM) $(OBJ)

fclean:
	@echo "$(RED)\nRemoving lib and .o files\n$(RES)"
	@$(RM) $(NAME) $(OBJ)

re: fclean all

.PHONY: all clean fclean re
