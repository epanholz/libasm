/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pani_zino <pani_zino@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/03 18:11:01 by pani_zino     #+#    #+#                 */
/*   Updated: 2020/10/12 20:59:02 by epanholz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"
#include "strings.h"
#include "stdlib.h"
#include "fcntl.h"
#include "sys/types.h"
#include "sys/uio.h"
#include "unistd.h"

// int		main(int ac, char **av)
// {
// 	// if (ac == 2)
// 	// 	printf("%zu\n", ft_strlen(av[1]));
	
// 	if (ac == 3)
// 	{
// 		printf("%d\n", ft_strcmp(av[1], av[2]));
// 		printf("%d\n", strcmp(av[1], av[2]));
// 	}

// 	write(1, "test\n", 6);
// 	ft_write(1, "test", 5);
// 	return(0);
// }

// int		main(void)
// {
// 	int x, y;

// 	x = open("test1.txt", O_WRONLY | O_CREAT, 0644);
// 	y = open("test2.txt", O_WRONLY | O_CREAT, 0644);
// 	printf("%zd\n", write(5, "test\n", 6));
// 	printf("%zd\n", ft_write(5, "test\n", 6));
// 	printf("\n");
// 	printf("%zd\n", write(1, "test\n", 6));
// 	printf("%zd\n", ft_write(1, "test\n", 6));
// 	printf("\n");
// 	printf("%zd\n", write(x, "test\n", 6));
// 	printf("%zd\n", ft_write(y, "test\n", 6));
// 	return(0);
// }

int		main(void)
{
	int fd;
	char	buff[6];

	fd = open("main.c", O_RDONLY);
	printf("%zd\n", read(5, "test\n", 6));
	printf("%zd\n", ft_read(5, "test\n", 6));
	printf("\n");
	printf("%zd\n", read(fd, buff, 3));
	printf("%zd\n", ft_read(fd, buff, 3));
	printf("\n");
	return(0);
}