/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:49:52 by zhebert           #+#    #+#             */
/*   Updated: 2023/11/02 18:18:11 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int character)
{
	const char	*start;

	if (str == NULL)
		return (NULL);
	start = str;
	str += ft_strlen(str);
	while (str >= start)
	{
		if (*str == (char)character)
		{
			return ((char *)str);
		}
		str--;
	}
	return (NULL);
}
/*
int main()
{
	const char	*str = "Hello, World!";
	char		searchChar = 'o';
	
	char *lastResult = ft_strrchr(str, searchChar);
	if (lastResult != NULL)
	{
        printf("Last occurrence of '%c' found 
		at position %ld\n", searchChar, lastResult - str);
    }
	else
	{
        printf("'%c' not found in the string.\n", searchChar);
    }
    return 0;
}*/
//tested