/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_words.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 13:07:02 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/14 13:09:13 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_words(char const *s, char c)
{
	size_t	i;
	size_t	wrd_c;

	i = 0;
	wrd_c = 0;
	while (s[i])
	{
		if (s[i] == c)
			while (s[i] == c)
				i++;
		if (s[i])
		{
			wrd_c++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (wrd_c);
}
