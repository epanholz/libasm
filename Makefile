# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: zilisabethpangasch <zilisabethpangasch@      +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/21 11:50:12 by zilisabethp   #+#    #+#                  #
#    Updated: 2020/10/21 18:32:19 by pani_zino     ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME := libasm.a

ASM_FUNCTIONS := ft_read.s ft_strcmp.s ft_strcpy.s \
 ft_strlen.s ft_write.s

ASM_OBJ := $(ASM_FUNCTIONS:.s=.o)

all: $(NAME)

$(NAME): $(ASM_OBJ)
	@printf "\e[1;34\Compiling library\n\e[0m"
	@ar rcs $(NAME) $(ASM_OBJ)

%.o: %.s
	@printf "\e[1;34mGenerating .o files\n\e[0m"
	@nasm -f macho64 -o $@ $<

test: all
	@printf "\e[1;34mRunning test\n\e[0m"
	@gcc -o test $(NAME) main.c && ./test && rm ./test && make fclean

clean:
	@printf "\e[1;34mRemoving .o files\n\e[0m"
	@rm $(ASM_OBJ)

fclean:
	@printf "\e[1;34mRemoving lib and .o files\n\e[0m"
	@rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
