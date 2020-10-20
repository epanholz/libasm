/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   asm.h                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: epanholz <epanholz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/20 15:01:26 by epanholz      #+#    #+#                 */
/*   Updated: 2020/10/20 15:01:31 by epanholz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASM_H
# define ASM_H

# include <stdlib.h>
# include <stdio.h>

int			ft_strcmp(const char *s1, const char *s2);
size_t		ft_strlen(const char *s);
ssize_t		ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t		ft_read(int fildes, void *buf, size_t nbyte);
char		*ft_strcpy(char *dst, const char *src);
char		*strdup(const char *s1);

#endif
