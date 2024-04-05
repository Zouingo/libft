/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:29:01 by zhebert           #+#    #+#             */
/*   Updated: 2023/11/01 20:45:45 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	res = ft_strdup((char *)s);
	if (res == NULL)
		return (NULL);
	while (res[i] != '\0')
	{
		res[i] = f(i, res[i]);
		i++;
	}
	return (res);
}
/*
char	apply_function(unsigned int index, char c)
{
	if (index % 2 == 0)
	{
		if (c >= 'a' && c <= 'z')
		{
			return (c - 32);
		}
	}
	return (c);
}

int	main(void)
{
	const char	*input = "hello, world!";
	char		*result;

	result = ft_strmapi(input, apply_function);
	if (result == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	printf("Original String: %s\n", input);
	printf("Modified String: %s\n", result);
	free(result);
	return (0);
}
*/