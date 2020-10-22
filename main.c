/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pani_zino <pani_zino@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/03 18:11:01 by pani_zino     #+#    #+#                 */
/*   Updated: 2020/10/22 15:10:21 by epanholz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"
#include "strings.h"
#include "stdlib.h"
#include "fcntl.h"
#include "sys/types.h"
#include "sys/uio.h"
#include "unistd.h"
#include <errno.h>

// int		main()
// {
// 	// nasm -fmacho64 ft_strcmp.s && nasm -fmacho64 ft_strlen.s && gcc -Wall -Werror -Wextra -fsanitize=address main.c ft_strcmp.o ft_strlen.o
	
// 	char *empty = "";
// 	char *test = "This is is one very looooong test string";
// 	char *diff = "This is another string";

// 	printf("STRLEN EMPTY STRING\n");
// 	printf("real strlen: %zu\nmy strlen: %zu\n\n", strlen(empty), ft_strlen(empty));
// 	printf("STRLEN NORMAL STRING\n");
// 	printf("real strlen: %zu\nmy strlen: %zu\n\n", strlen(test), ft_strlen(test));
	
// 	printf("STRCMP 2 EMPTY STRINGS\n");
// 	printf("real strcmp: %d\nmy strcmp: %d\n\n", strcmp(empty, empty), ft_strcmp(empty, empty));
// 	printf("STRCMP FIRST STRING EMPTY\n");
// 	printf("real strcmp: %d\nmy strcmp: %d\n\n", strcmp(empty, test), ft_strcmp(empty, test));
// 	printf("STRCMP SECOND STRING EMPTY\n");
// 	printf("real strcmp: %d\nmy strcmp: %d\n\n", strcmp(test, empty), ft_strcmp(test, empty));
// 	printf("STRCMP STRINGS WITH NO DIFF\n");
// 	printf("real strcmp: %d\nmy strcmp: %d\n\n", strcmp(test, test), ft_strcmp(test, test));
// 	printf("STRCMP STRINGS WITH DIFF\n");
// 	printf("real strcmp: %d\nmy strcmp: %d\n\n", strcmp(test, diff), ft_strcmp(test,diff));
// 	printf("STRCMP STRINGS WITH DIFF\n");
// 	printf("real strcmp: %d\nmy strcmp: %d\n\n", strcmp(diff, test), ft_strcmp(diff,test));
// 	return(0);
// }

// int		main(void)
// {
// 	//nasm -fmacho64 ft_write.s && gcc -Wall -Werror -Wextra -fsanitize=address main.c ft_write.o

// 	int x, y;
// 	x = open("test1.txt", O_WRONLY | O_CREAT, 0644);
// 	y = open("test2.txt", O_WRONLY | O_CREAT, 0644);

// 	printf("real write : %zd errno: %d\n", write(-12, "test\n", 6), errno);
// 	printf("my write : %zd errno: %d\n", ft_write(-12, "test\n", 6), errno);
// 	printf("\n");
// 	printf("real write: %zd \n", write(1, "test ", 6));
// 	printf("my write: %zd \n", ft_write(1, "test ", 6));
// 	printf("\n");
// 	printf("real write: %zd\n", write(x, "test\n", 6));
// 	printf("my write: %zd\n", ft_write(y, "test\n", 6));
// 	close(x);
// 	close(y);
// 	return(0);
// }

// int		main(void)
// {
// 	//nasm -fmacho64 ft_read.s && gcc -Wall -Werror -Wextra -fsanitize=address main.c ft_read.o

// 	int fd;
// 	char	buff[6];

// 	fd = open("main.c", O_RDONLY);
// 	printf("real read: %zd errno: %d\n", read(5, "test\n", 6), errno);
// 	printf("my read: %zd errno: %d\n", ft_read(5, "test\n", 6), errno);
// 	printf("\n");
// 	printf("real read: %zd\n", read(fd, buff, 3));
// 	printf("my read: %zd\n", ft_read(fd, buff, 3));
// 	printf("\n");
// 	return(0);
// }

// int			main(void)
// {
// 	//nasm -fmacho64 ft_strcpy.s && gcc -Wall -Werror -Wextra -fsanitize=address main.c ft_strcpy.o

// 	const char	s1[6] = "Hello";
// 	char		s2[6];

// 	printf("Real: %s\n", strcpy(s2, s1));
// 	printf("Mine: %s\n", ft_strcpy(s2, s1));
// 	return (0);
// }

int			main(void)
{
	//nasm -fmacho64 ft_strdup.s && gcc -Wall -Werror -Wextra -fsanitize=address main.c ft_strdup.o
	//nasm -fmacho64 ft_strdup.s && gcc -Wall -Werror -Wextra main.c ft_strdup.o

	const char	*s1 = "Hello";

	printf("Real: %s\n", strdup(s1));
	printf("Mine: %s\n", ft_strdup(s1));
	return (0);
}