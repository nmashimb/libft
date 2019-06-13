/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:08:07 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/13 15:15:06 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	start;
	char	**str;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	str = (char **)malloc(sizeof(char *) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = -1;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		start = i;
		len = 0;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			len++;
		}
		j++;
		str[j] = ft_strsub(s, start, len);	
	}
	str[j] = NULL;
	return (str);
}

int main()
{
	char *s = "*****hello*****world***";
	char **x = ft_strsplit(s, '*');
	int i = 0;
	while(x[i] != '\0')
	{
		printf("%s\n", x[i]);
		i++;
	}
	return 0;
}
