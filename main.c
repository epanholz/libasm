/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pani_zino <pani_zino@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/03 18:11:01 by pani_zino     #+#    #+#                 */
/*   Updated: 2020/10/29 15:39:33 by pani_zino     ########   odam.nl         */
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

int			ft_list_size_test(t_list *begin_list)
{
	t_list *current;
	int i;

	i = 0;
	current = begin_list;
	while (current)
	{
		current = current->next;
		i++;
	}
	return (i);
}

void	make_head(t_list **head)
{
	t_list *new_head;

	new_head = (t_list*)malloc(sizeof(t_list));
	new_head->data = NULL;
	new_head->next = NULL;
	*head = new_head;
}

void	add_object(t_list **head, void *type)
{
	t_list	*newnode;
	t_list	*current;

	current = *head;
	if (current->data == NULL)
		*current = (t_list){type, NULL};
	else
	{
		newnode = (t_list*)malloc(sizeof(t_list));
		*newnode = (t_list){type, NULL};
		while (current->next != NULL)
			current = current->next;
		current->next = newnode;
	}
}

int			main(void)
{
	const char *empty = "";
	char *test = "This is is one very looooong test string";
	char *diff = "This is another string";

	printf("\033[3;38;5;146m----------- STRLEN -----------\n\n\033[0m");
	printf("EMPTY STRING\n");
	printf("real: %zu\nmine: %zu\n\n", strlen(empty), ft_strlen(empty));
	printf("NORMAL STRING\n");
	printf("real: %zu\nmine: %zu\n\n", strlen(test), ft_strlen(test));
	printf("\n");

	printf("\033[3;38;5;146m----------- STRCMP -----------\n\n\033[0m");
	printf("2 EMPTY STRINGS\n");
	printf("real: %d\nmine: %d\n\n", strcmp(empty, empty), ft_strcmp(empty, empty));
	printf("FIRST STRING EMPTY\n");
	printf("real: %d\nmine: %d\n\n", strcmp(empty, test), ft_strcmp(empty, test));
	printf("SECOND STRING EMPTY\n");
	printf("real: %d\nmine: %d\n\n", strcmp(test, empty), ft_strcmp(test, empty));
	printf("STRINGS WITH NO DIFF\n");
	printf("real: %d\nmine: %d\n\n", strcmp(test, test), ft_strcmp(test, test));
	printf("STRINGS WITH DIFF\n");
	printf("real: %d\nmine: %d\n\n", strcmp(test, diff), ft_strcmp(test,diff));
	printf("STRINGS WITH DIFF\n");
	printf("real: %d\nmine: %d\n\n", strcmp(diff, test), ft_strcmp(diff,test));
	printf("\n");

	printf("\033[3;38;5;146m----------- WRITE -----------\n\n\033[0m");
	int x, y;
	x = open("test1.txt", O_WRONLY | O_CREAT, 0644);
	y = open("test2.txt", O_WRONLY | O_CREAT, 0644);

	printf("INVALID FD\n");
	printf("real: %zd errno: %d\n", write(-12, "test\n", 6), errno);
	printf("mine: %zd errno: %d\n", ft_write(-12, "test\n", 6), errno);
	printf("\n");
	printf("STANDART OUTPUT\n");
	printf("real: %zd \n", write(1, "test ", 6));
	printf("mine: %zd \n", ft_write(1, "test ", 6));
	printf("\n");
	printf("WORKING FD\n");
	printf("real: %zd\n", write(x, "test\n", 6));
	printf("mine: %zd\n", ft_write(y, "test\n", 6));
	close(x);
	close(y);
	printf("\n\n");

	printf("\033[3;38;5;146m----------- READ -----------\n\n\033[0m");
	int fd;
	char	buff[6];
	fd = open("main.c", O_RDONLY);

	printf("INVALID FD\n");
	printf("real: %zd errno: %d\n", read(5, "test\n", 6), errno);
	printf("mine: %zd errno: %d\n", ft_read(5, "test\n", 6), errno);
	printf("\n");
	printf("WORKING FD\n");
	printf("real: %zd\n", read(fd, buff, 3));
	printf("mine: %zd\n", ft_read(fd, buff, 3));
	printf("\n\n");

	printf("\033[3;38;5;146m----------- STRCPY -----------\n\n\033[0m");
	const char	s1[6] = "Hello";
	char		s2[6];

	printf("NORMAL STRING\n");
	printf("real: %s\n", strcpy(s2, s1));
	printf("mine: %s\n", ft_strcpy(s2, s1));
	printf("\n");
	printf("EMPTY STRING\n");
	printf("real: %s\n", strcpy(s2, empty));
	printf("mine: %s\n", ft_strcpy(s2, empty));
	printf("\n\n");

	printf("\033[3;38;5;146m----------- STRDUP -----------\n\n\033[0m");
	const char	*s3 = "Hello";
	const char	*s5 = "12 12";
	const char	*s6 = "pizza)!?";
	
	printf("EMPTY STRING\n");
	printf("real: %s\nmine: %s\n\n", strdup(empty), ft_strdup(empty));
	printf("NORMAL STRINGS\n");
	printf("real: %s\nmine: %s\n\n", strdup(s3), ft_strdup(s3));
	printf("real: %s\nmine: %s\n\n", strdup(s5), ft_strdup(s5));
	printf("real: %s\nmine: %s\n\n", strdup(s6), ft_strdup(s6));

	printf("\033[3;38;5;146m----------- BONUS LIST SIZE-----------\n\n\033[0m");
	t_list		**head;
	head = (t_list**)malloc(sizeof(t_list));;
	make_head(head);
	add_object(head, (void*)1);
	add_object(head, (void*)2);
	add_object(head, (void*)3);
	
	printf("c func: %d\n", ft_list_size_test(*head));
	printf("asm func: %d\n", ft_list_size(*head));
	return (0);
}