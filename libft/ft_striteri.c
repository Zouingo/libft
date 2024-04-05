/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:37:49 by zhebert           #+#    #+#             */
/*   Updated: 2023/10/27 20:19:49 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	if (s == NULL || f == NULL)
		return ;
	index = 0;
	while (*s)
	{
		f(index, s);
		s++;
		index++;
	}
}
/*
void	custom_function(unsigned int index, char *c)
{
	printf("Character at index %u: %c\n", index, *c);
}

int	main(void)
{
	char	myString[] = "Hello, World!";

	ft_striteri(myString, custom_function);
	return (0);
}
*/