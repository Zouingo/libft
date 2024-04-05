/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:15:57 by zhebert           #+#    #+#             */
/*   Updated: 2023/11/02 18:11:41 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*p;

	p = s;
	if (s == NULL)
		return ;
	while (len-- > 0)
		*p++ = 0;
}

// int main() {
//     char buffer[10];
//     size_t len = sizeof(buffer);

//     // Initialize the buffer with some data
//     for (size_t i = 0; i < len; i++) {
//         buffer[i] = 'A';
//     }

//     printf("Before ft_bzero:\n");
//     for (size_t i = 0; i < len; i++) {
//         printf("%c", buffer[i]);
//     }
//     printf("\n");

//     // Call ft_bzero to set the buffer to zeros
//     ft_bzero(buffer, len);

//     printf("After ft_bzero:\n");
//     for (size_t i = 0; i < len; i++) {
//         printf("%c", buffer[i]);
//     }
//     printf("\n");

//     return 0;
// }
