# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: zilisabethpangasch <zilisabethpangasch@      +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/21 11:50:12 by zilisabethp   #+#    #+#                  #
#    Updated: 2020/10/30 16:07:13 by epanholz      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

RED = \033[1;38;5;168m
BLU = \033[3;38;5;146m
RES = \033[0m

NAME := libasm.a

SRC := ft_read.s ft_strcmp.s ft_strcpy.s \
 ft_strlen.s ft_write.s ft_strdup.s

BONUSSRC := ft_list_size.s

FLAGS := -Wall -Wextra -Werror -fsanitize=address

OBJ := $(SRC:.s=.o)

BONUS_OBJ = $(BONUSSRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(RED)\nCompiling Library\n$(RES)"
	@ar rcs $(NAME) $(OBJ)

bonus: $(BONUS_OBJ)
	@echo "$(RED)\nCompiling Bonus Lib\n$(RES)"
	@ar rcs $(NAME) $(BONUS_OBJ)

%.o: %.s
	@echo "$(BLU)Generating .o files$(RES)"
	@nasm -f macho64 -o $@ $<

test: all
	@echo "$(RED)\nRunning Test\n$(RES)"
	@gcc $(FLAGS) -o test $(NAME) main.c && ./test && rm ./test && make fclean

test_bonus: all bonus
	@echo "$(RED)\nRunning Bonus Test\n$(RES)"
	@gcc $(FLAGS) -o test $(NAME) bonus.c && ./test && rm ./test && make fclean

clean:
	@echo "$(RED)\nRemoving .o Files\n$(RES)"
	@$(RM) $(OBJ) $(BONUS_OBJ)

fclean:
	@echo "$(RED)\nRemoving Lib and .o Files\n$(RES)"
	@$(RM) $(NAME) $(OBJ) $(BONUS_OBJ) test1.txt test2.txt

re: fclean all

.PHONY: all clean fclean re
