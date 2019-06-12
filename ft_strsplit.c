/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:08:07 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/12 17:42:11 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_strsplit(char const *s, char c)
{
	size_t	i; //main str indx
	size_t	j; //str indx
	size_t	len;
	size_t	start;
	size_t	nul_indx;
	char	**str;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	len = strlen(s);
	nul_indx = len;
	str = (char **)malloc(sizeof(char *) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c) //incr i if del found
			i++;
		len = 0;
		start = i;
		while (s[i] != c && s[i] != '\0') //find length of substr (static func)
		{
			i++;
			len++;
		}
		str[j] = (char *)malloc(len + 1); // static func?
		strncpy(str[j], &s[start], len);
		str[len] = '\0';
		if (s[i] == '\0')
		{
			str[nul_indx] = '\0';
			return (str);
		}
		j++;
		i++;

	}
	str[i] = '\0';
	return (str);
}

int		main()
{
	char *s = "UNDER";
	char **x = ft_strsplit(s, '*');
	printf("%s\n", x[0]);
	return 0;
}
