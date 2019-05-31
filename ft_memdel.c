/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:21:50 by nmashimb          #+#    #+#             */
/*   Updated: 2019/05/31 09:43:22 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*void	ft_memdel(void **ap)
{
	 size_t i;

    i = 0;
    while (i < sizeof(ap)/sizeof(void *))
    {
        free(ap[i]);
        i++;
    }
	ap = NULL;
}*/

void	ft_memdel(void **ap)
{
	if (!ap || !*ap)
	{
		return ;
	}
	free(*ap);
	*ap = NULL;
}

int        main()
{
    char *s[2] = {"hello, world"};
   
	//s[0] =	"hello"; 
	//s[1] = "world";
  
    printf("%p\n", s[0]);
	//(void **)s;
	ft_memdel((void **)s);
	printf("%p\n", s);
    return 0;
}
