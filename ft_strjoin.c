/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:58:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/03 17:05:48 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	len = 0;
	while (*s1++)
		len++;
	while (*s2++)
		len++;
	str = (char *)malloc(len + 1);
   	while (*s1)
	{
		*str = *s1;
		s1++;
		str++;
	}
	while (*s2)
	{
		*str = *s2;
		s2++;
		str++;
	}
	str = '\0';
	str = str - len;
	return (str);
}

int		main()
{
//	int len = 0;
	char *s1 = "abcde";
	char *str = (char *)malloc(6);
	while (*s1)
		{
			*str = *s1;
			str++;
			s1++;
		}
	*str = '\0';
	str = str - 5;	
	printf("%s\n", str);
	return 0;
}
