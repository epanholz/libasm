/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bonus.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: epanholz <epanholz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 15:48:24 by epanholz      #+#    #+#                 */
/*   Updated: 2020/10/30 15:49:20 by epanholz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

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

int		main(void)
{
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
