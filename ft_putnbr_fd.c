/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:39:36 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/05 17:55:22 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n = -2147483648) //min value of integers, but doesnt prnt on its own
		putstr("-2147483648"); // change std func to ft_ funct
	if ((n >= 0 && n <= 9))
	{
		putchar(n + '0');
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	if (n < 0)
	{
		putchar('-');
		ft_putnbr_fd(-n, fd);
	}
}

int	main()
{
	int a = -2147483648;
	ft_putnbr_fd(a, 1);
	return 0;
}
