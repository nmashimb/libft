/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:48:16 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/05 11:54:06 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl(char const *s)
{
	char nl;

	nl = '\n';
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
	write(1, &nl, 1);
}
