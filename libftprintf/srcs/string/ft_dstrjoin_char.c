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

char	*ft_dstrjoin_char(char *s1, char c, short flag)
{
	char	*result;
	char	*tmp;

	if (s1 && (result = (char*)malloc(sizeof(char) *
		(ft_strlen(s1) + 1 + 1))))
	{
		tmp = result;
		while (*s1)
			*tmp++ = *s1++;
		*tmp++ = c;
		*tmp = '\0';
		return (result);
	}
	if (flag == 1)
		ft_strdel(&s1);
	return (NULL);
}
