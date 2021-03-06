/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sestelle <sestelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:10:37 by sestelle          #+#    #+#             */
/*   Updated: 2020/11/02 19:34:40 by sestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s1;

	s1 = (char *)s;
	while (*s1 != '\0')
	{
		if (*s1 == c)
			return (s1);
		s1++;
	}
	if (*s1 == c && c == '\0')
		return (s1);
	return (NULL);
}
