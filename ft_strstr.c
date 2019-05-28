/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:32:48 by nmashimb          #+#    #+#             */
/*   Updated: 2019/05/28 11:12:36 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t n_len;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	n_len = 0;
	while (needle[n_len] != '\0')
		n_len++;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			if (strncmp(&haystack[i], needle, n_len) == 0)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
