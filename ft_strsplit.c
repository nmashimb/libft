/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:08:07 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/06 16:25:27 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	**ft_strsplit(char const *s, char c)
{
	size_t	i; //main str indx
	size_t	j; //str indx
	size_t	len;
	size_t	start;
	size_t	nul_indx;
	char	**str;

	i = 0;
	j = 0;
	len = 13; //strlen(s);
	nul_indx = 13; //len;
	str = (char **)malloc(sizeof(char *) * (len + 1));
	while (s[i] != '\0')
	{
		if (s[i] == c) //incr i if del found
			i++;
		len = 0;
		start = i;
		while (s[i] != c && s[i] != '\0') //find length of substr (static func)
		{
			i++;
			len++;
		}
		if (s[i] == '\0')
			break;
		str[j] = (char *)malloc(len + 1); // static func?
		strncpy(str[j], &s[start], len);
		str[len] = NULL;
		i++;
		j++;
	}
	str[nul_indx] = NULL;
	return (str);
}

int		main()
{
	char *s = "*HELLO*WORLD*UNDER*";
	char **x = ft_strsplit(s, '*');
	printf("%s\n", x[2]);
	return 0;
}
