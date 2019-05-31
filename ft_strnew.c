/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:57:36 by nmashimb          #+#    #+#             */
/*   Updated: 2019/05/31 10:46:54 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
//#include <string.h>
#include <unistd.h>

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*str;

	str = (char *)malloc(size + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i <= size + 1)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

int	main()
{
	char *ss	= ft_strnew(5);
	ss = "hello";
	//printf("%s\n", ss);
	int i = 0;
	while (ss[i] != '\0')
	{
		write(1, &ss[i], 1);
		i++;
	}
}
