/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 02:54:41 by jguyet            #+#    #+#             */
/*   Updated: 2015/12/04 04:02:25 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_dstrjoin(char *s1, char *s2, short flag)
{
	char	*result;
	char	*tmp;

	if (s1 && s2 && (result = (char*)malloc(sizeof(char) *
		(ft_strlen(s1) + ft_strlen(s2) + 1))))
	{
		tmp = result;
		while (*s1)
			*tmp++ = *s1++;
		while (*s2)
			*tmp++ = *s2++;
		*tmp = '\0';
		return (result);
	}
	if (flag == 1 || flag == 3)
		ft_strdel(&s1);
	if (flag == 2 || flag == 3)
		ft_strdel(&s2);
	return (NULL);
}
