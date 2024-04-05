/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:35:03 by zhebert           #+#    #+#             */
/*   Updated: 2023/11/02 18:16:05 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (src == NULL)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	while (i < (size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int main() {
//     char destination[20];
//     const char *source = "Hello, World!";
//     size_t size = sizeof(destination);

//     size_t result = ft_strlcpy(destination, source, size);

//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", destination);
//     printf("Result: %zu\n", result);

//     return 0;
// }
