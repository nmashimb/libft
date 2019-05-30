/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:42:30 by nmashimb          #+#    #+#             */
/*   Updated: 2019/05/30 15:16:29 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
//#include <string.h>

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*str;
	char	*tmp;

	str = malloc(size);
	if (str == NULL)
		return (NULL);
	i = 0;
	tmp = (char *)str;
	while (i < size)
	{
		tmp[i] = 0;
		i++;
	}
	return (str);
}
