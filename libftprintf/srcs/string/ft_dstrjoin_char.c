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
	char	*pt;

	result = NULL;
	pt = s1;
	if (s1 && (result = (char*)malloc(sizeof(char) *
		(ft_strlen(s1) + 1 + 1))))
	{
		tmp = result;
		while (*s1)
			*tmp++ = *s1++;
		*tmp++ = c;
		*tmp = '\0';
	}
	if ((flag == 1 && pt) || (flag == 3 && pt))
		ft_strdel(&pt);
	return (result);
}
