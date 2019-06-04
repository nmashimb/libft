/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:21:15 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/04 18:40:19 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char	*ft_itoa(int n)
{
	int		i;
	int		end;
	int		len;
	char	*str;

	end = 0;
	if (n < 0)
	{
		i = (-1) * n;
		end++;
	}
	i = n;
	len = 1;
	while ((i = i / 10) != 0)
		len++;
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (0);
	i = len - 1;
	while (end <= i)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
    str[len] = '\0';
	return (str);

}

int		main()
{
	int n = -123;

	char *str = ft_itoa(n);

	printf("%s\n", str);
	return (0);
}
