/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:13:21 by nmashimb          #+#    #+#             */
/*   Updated: 2019/05/28 11:31:42 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			if (strncmp(&haystack[i], needle, len) == 0)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char *s = "coding consumes days, hours and minutes";
	char *f = "nutes";

	printf("ft_ %s\n", ft_strnstr(s, f, 3));
	printf("st_ %s\n", strnstr(s, f, 3));
	return 0;
}*/
