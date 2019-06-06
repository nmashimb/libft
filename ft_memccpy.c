/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:26:41 by nmashimb          #+#    #+#             */
/*   Updated: 2019/05/24 23:53:02 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *restrict dst, const void *restrict src,\
		int c, size_t n)
{
	size_t		i;
	unsigned char	*s_des;
	unsigned char	*s_src;

	i = 0;
	s_des = (unsigned char *)dst;
	s_src = (unsigned char *)src;
	if (n != 0)
	{
		while (i < n)
		{
			if (s_src[i] == (unsigned char)c)
				return (&dst[i + 1]);
			s_des[i] = s_src[i];
			i++;
		}
	}
	return (NULL);
}
