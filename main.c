/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pani_zino <pani_zino@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/03 18:11:01 by pani_zino     #+#    #+#                 */
/*   Updated: 2020/10/04 14:52:11 by pani_zino     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"
#include "strings.h"

int		main(int ac, char **av)
{
	// if (ac == 2)
	// 	printf("%zu\n", ft_strlen(av[1]));
	if (ac == 3)
	{
		printf("%d\n", ft_strcmp(av[1], av[2]));
		printf("%d\n", strcmp(av[1], av[2]));
	}
	return(0);
}
