/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 14:26:11 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/01 14:48:42 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char *ft_strmap(char const *s, char (*f)(char))
{
	size_t i;
	size_t len;
	char	*tmp;

	// if (s == NULL)
	//	return (0);
	len = 0;
	while (s[len] != '\0')
		len++;
	i = 0;
	tmp = (char *)malloc(len + 1);
	if (tmp == NULL)
		return (0);
	while (s[i] != '\0')
	{
		tmp[i] = f(s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
