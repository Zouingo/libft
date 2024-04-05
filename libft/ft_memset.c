/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:03:36 by zhebert           #+#    #+#             */
/*   Updated: 2023/11/02 18:14:38 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	uc;

	p = (unsigned char *)s;
	uc = (unsigned char)c;
	if (s == NULL)
		return (NULL);
	while (n-- > 0)
	{
		*p++ = uc;
	}
	return (s);
}

// int main()
// {
//     char str[20];
//     int value = 65; // ASCII value of 'A'
//     size_t size = 10;

//     // Use your custom ft_memset function
//     ft_memset(str, value, size);
//     printf("Custom memset: %s\n", str);

//     char str2[20];
//     memset(str2, value, size);
//     printf("Standard memset: %s\n", str2);

//     return 0;
// }
