/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   asm.h                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: epanholz <epanholz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/20 15:01:26 by epanholz      #+#    #+#                 */
/*   Updated: 2020/10/29 13:48:18 by pani_zino     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASM_H
# define ASM_H

# include <stdlib.h>
# include <stdio.h>

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

int			ft_strcmp(const char *s1, const char *s2);
size_t		ft_strlen(const char *s);
ssize_t		ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t		ft_read(int fildes, void *buf, size_t nbyte);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strdup(const char *s1);
int			ft_list_size(t_list *begin_list);

#endif
