/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:53:37 by nmashimb          #+#    #+#             */
/*   Updated: 2019/05/23 13:59:13 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*hold_str;

	i = 0;
	hold_str = (char *)b;
	while (i < len)
	{
		hold_str[i] = (char)c;
		i++;
	}
	return (hold_str);
}
