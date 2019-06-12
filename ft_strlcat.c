/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:36:10 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/12 17:47:20 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		dst_len;
	size_t		src_len;
	char		*des;
	char		*sc;

	i = 0;
	des = (char *)dst;
	sc = (char *)src;
	dst_len = ft_strlen(des);
	src_len = ft_strlen(sc);
	if (dstsize == 0)
		return (src_len);
	else if (dstsize < dst_len)
		return (dstsize + src_len);
	else if (dstsize == dst_len)
		return (dst_len + src_len);
	while (i < dstsize - dst_len - 1)
	{
		des[dst_len + i] = sc[i];
		i++;
	}
	des[dst_len + i] = '\0';
	return (dst_len + src_len);
}
