/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:31:34 by nmashimb          #+#    #+#             */
/*   Updated: 2019/05/27 15:25:16 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, void *src, size_t n)
{
	size_t	i;
	char	*s_des;
	char	*s_src;

	i = 0;
	s_des = (char *)dst;
	s_src = (char *)src;
	while (i < n)
	{
		s_des[i] = s_src[i];
		i++;
	}
	return (s_des);

}

int main(void)
{
	char to[50] = "earth";
	char hol[50] = "hello world, Nyiko here";
	char too[50] = "earth";


	printf("ft_ %s\n", ft_memmove(to + 3, hol + 13, 5));
	printf("mem_ %s\n", memmove(too + 3, hol + 13, 5));
	printf("strng to: %s\n", to);
	printf("strng too: %s\n", too);


	return 0;
}
