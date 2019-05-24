/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 16:28:29 by nmashimb          #+#    #+#             */
/*   Updated: 2019/05/24 16:20:56 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t		i;
	char		*s_des;
	char		*s_src;

	i = 0;
	s_des = (char *)dst;
	s_src = (char *)src;
	while (i < n)
	{
		s_des[i] = s_src[i];
		i++;
	}
	return ((void *)s_des);
}
