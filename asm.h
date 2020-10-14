/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   asm.h                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: pani_zino <pani_zino@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 14:32:03 by pani_zino     #+#    #+#                 */
/*   Updated: 2020/10/14 19:03:29 by epanholz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASM_H
# define ASM_H

# include <stdlib.h>
# include <stdio.h>

size_t		ft_strlen(const char *s);
int			ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *dst, const char *src);
ssize_t		ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t		ft_read(int fildes, void *buf, size_t nbyte);

#endif
