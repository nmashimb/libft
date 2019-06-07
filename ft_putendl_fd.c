/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 17:04:32 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/06 17:05:31 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
{
	char nl;

	nl = '\n';
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, &nl, 1);
}