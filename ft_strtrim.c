/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                       +#+  +:+       +#+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 10:41:58 by nmashimb             #+#    #+#          */
/*   Updated: 2019/06/04 11:40:52 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*str;

	end = strlen(s); // change me
	start = 0;
	while ((s[start] != '\0') && (s[start] == ' ' || s[start] == '\n'	||	s[start] == '\t'))
		start++;
	if (s[start] == '\0')
		return (0);
	end = end - 1;
	while (end  >= 0 && (s[end] == ' ' || s[end] == '\n' || s[end] == '\t'))
		end--;
	str = (char *)malloc(end - start + 1 + 1);
	if (str == NULL)
		return (0);
	i = 0;
	end = end - start + 1;
	while (i < end) // USE A FUNCTION TO CPY INSTD
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

int main()
{
	char *s = "";
	char *x = ft_strtrim(s);
	printf("%s\n", x);
	return 0;
}
