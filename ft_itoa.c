/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:21:15 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/05 11:21:49 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//static char	*assign_num();

char	*ft_itoa(int n)
{
	int		i;
	int		end;
	int		len;
	char	*str;

	i = n;
	end = 0;
	len = 1;
	if (n < 0)
	{
		i = (-1) * n;
		end++;
		len = 2;
	}
	while ((i = i / 10) != 0)
		len++;
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (0);
	if (n < 0)
	{
		str[0] = 45;
		n = (-1) * n;
	}
	i = len - 1;
	while (end <= i)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
    str[len] = '\0';
	return (str);
}
