/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 13:00:50 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/11 14:08:28 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len;

	if (!s1 && !s2)
		return (1);
	if (!s1 && s2)
		return (0);
	i = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
