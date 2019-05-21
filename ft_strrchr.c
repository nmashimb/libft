/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 17:15:29 by nmashimb          #+#    #+#             */
/*   Updated: 2019/05/21 17:44:51 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int n;

	n = 0;
	while (s[n] != '\0')
		n++;
	if (s[n] == (char)c)
		return ((char *)&s[n]);
	n--;
	while (n != 0)
	{
		if (s[n] == (char)c)
			return ((char *)&s[n]);
		n--;
	}
	return (NULL);
}
