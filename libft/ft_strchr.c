/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:22:45 by zhebert           #+#    #+#             */
/*   Updated: 2023/11/02 18:17:44 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		if (*str == (char)character)
			return ((char *)str);
		str++;
	}
	if (*str == (char)character)
		return ((char *)str);
	return (NULL);
}
/*
int main()
{
	const char *str = "Hello, World!";
	char searchChar = 'W';

	char *result = ft_strchr(str, searchChar);

	if (result != NULL) {
		printf("Found '%c' at position %ld\n", searchChar, result - str);
	} else {
		printf("'%c' not found in the string.\n", searchChar);
	}
	return 0;
}*/
//this code was tested