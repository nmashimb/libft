/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:36:10 by nmashimb          #+#    #+#             */
/*   Updated: 2019/05/29 11:31:00 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
size_t		ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t		i;
	size_t		dst_len;
	size_t		src_len;
	char		*des;
	char		*sc;

	i = 0;
	des = (char *)dst;
	sc = (char *)src;
	dst_len = strlen(des); //DONT FORGET TO USE YOUR OWN STRLEN!!!
	src_len = strlen(sc);
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

int		main()
{
	char ftds[20] = "hellohelloo";
	char ftsc[] = "world";

	char ds[20] = "hellohelloo";
	char sc[] = "world";

	printf("ft_ %lu\n", ft_strlcat(ftds, ftsc, 11));
	printf("std %lu\n", strlcat(ds, sc, 11));
	return (0);
}
