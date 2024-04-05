/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:18:51 by zhebert           #+#    #+#             */
/*   Updated: 2023/11/02 18:17:08 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	lendest;
	size_t	lensrc;

	lendest = 0;
	if (src == NULL || dest == NULL)
		return (0);
	while (dest[lendest])
		lendest++;
	lensrc = 0;
	while (src[lensrc])
		lensrc++;
	if (lendest >= size)
		return (lensrc + size);
	i = 0;
	while (i + lendest < size - 1 && src[i])
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lendest + lensrc);
}

// int main() {
//     char destination[20] = "Hello, ";
//     const char *source = "World!";
//     size_t size = sizeof(destination);
//     size_t result = ft_strlcat(destination, source, size);
//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", destination);
//     printf("Result: %zu\n", result);
//     return 0;
// }
