/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:11:17 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/03 15:55:58 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i] != '\0')
		i++;
	if (s == NULL || len == 0 || i <= start || i < len \
			|| i - len - 1 == 0 || i - len - 1 <= len)
		return (0);
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	j = 0;
	i = start;
	while (i < start + len)
	{
		str[j] = s[start + j];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}

int		main()
{
	char *s = "abcdefghijklmnopqrstuvwxyz";

	char *x = ft_strsub(s, 7, 9);
	printf("%s\n", x);	
	return 0;
}
