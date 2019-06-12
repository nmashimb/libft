/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:13:21 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/12 17:49:51 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && (i + ft_strlen(needle) <= len))
	{
		if (haystack[i] == needle[0])
		{
			if (strncmp(&haystack[i], needle, ft_strlen(needle)) == 0)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
