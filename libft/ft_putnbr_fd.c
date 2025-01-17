/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:09:23 by zhebert           #+#    #+#             */
/*   Updated: 2023/11/01 19:57:55 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd (n / 10, fd);
	ft_putchar_fd ((n % 10 + '0'), fd);
}

/*
int main()
{
    int number = 34567854; // Change this to the number you want to test
    int fd = 1; // File descriptor 1 corresponds to standard output (console)

    ft_putnbr_fd(number, fd);

    return 0;
}
*/