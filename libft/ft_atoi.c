/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:20:02 by zhebert           #+#    #+#             */
/*   Updated: 2023/11/02 18:59:36 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

int static	ft_isnumber(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	value;
	int	i;

	sign = 1;
	i = 0;
	value = 0;
	if (str == NULL)
		return (0);
	while (is_space(str[i]) == 1)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isnumber(str[i]) == 1)
	{
		value *= 10;
		value += str[i++] - '0';
	}
	return (value * sign);
}

// int main()
// {
// 	char str[] = "3456765";
// 	int i;
// 	i = ft_atoi(str);
// 	printf("%d", i);
// 	return(0);
// }