/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 17:15:29 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/08 12:38:34 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t len;

	len = ft_strlen(s);
	while (len != 0 && s != NULL)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (0);
}
