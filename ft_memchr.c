/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:28:03 by nmashimb          #+#    #+#             */
/*   Updated: 2019/05/27 16:17:28 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}

int		main()
{
	char a[] = "coding takes hours";

	printf("ft_ %p\n", (char *)ft_memchr(a, '\0', 30));
	printf("std %p\n", (char *)memchr(a, '\0', 30));
	printf("str %p\n", &a[18]);
	return 0;
}
