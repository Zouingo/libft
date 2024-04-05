/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:19:26 by zhebert           #+#    #+#             */
/*   Updated: 2023/11/02 18:14:17 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (src == NULL || dest == NULL)
		return (NULL);
	if (d == s)
		return (dest);
	if (s < d && s + n > d)
	{
		s += n;
		d += n;
		while (n--)
			*(--d) = *(--s);
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}

// int main() {
//     char buffer[20];

//     // Initialize the buffer with a source string
//     const char *src = "Hello, World!";
//     size_t n = strlen(src) + 1;  // Include the null-terminator

//     ft_memmove(buffer, src, n);

//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", buffer);

//     return 0;
// }
