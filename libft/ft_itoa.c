/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:11:09 by zhebert           #+#    #+#             */
/*   Updated: 2023/11/01 20:42:35 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*dothething(int n, char *str, int len)
{
	long	temp;
	int		i;

	temp = n;
	if (temp < 0)
	{
		temp *= -1;
		str[0] = '-';
	}
	else
		str[0] = '\0';
	i = len - 1;
	while (i > 0)
	{
		str[i--] = (temp % 10) + '0';
		temp /= 10;
	}
	if (str[0] != '-')
		str[i] = (temp % 10) + '0';
	str[len] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = count_digits(n);
	if (n < 0)
		len += 1;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	dothething(n, str, len);
	return (str);
}
/*
int	main(void)
{
	int num = -987654321;
	char *result = ft_itoa(num);

	if (result == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	printf("%s", result);
	free(result);
	return (0);
}*/