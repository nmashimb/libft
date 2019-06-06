/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 16:48:05 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/06 16:57:51 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putnbr(int n)
{
	/*if (n == -2147483648) //min value of integers, but doesnt prnt on its own
		ft_putstr("-2147483648");*/ // change std func to ft_ funct
	if ((n >= 0 && n <= 9))
	{
		putchar(n + '0');
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	if (n < 0)
	{
		putchar('-');
		ft_putnbr(-n);
	}
}

int	main()
{
	int a = -2147483648;
	ft_putnbr(a);
	return 0;
}
