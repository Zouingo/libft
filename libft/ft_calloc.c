/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:27:16 by zhebert           #+#    #+#             */
/*   Updated: 2023/11/01 21:46:47 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void	*ptr;

	ptr = malloc(num_elements * element_size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, num_elements * element_size);
	return (ptr);
}
/*
int main()
{
	size_t num_elements = 10;
	size_t element_size = sizeof(int);

	int* my_array = (int*)my_calloc(num_elements, element_size);

	if (my_array != NULL)
	{
		free(my_array);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return 0;
}
*/