/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_short.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <frmarinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 01:18:22 by frmarinh          #+#    #+#             */
/*   Updated: 2016/05/31 01:18:24 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char		*start_itoa(int i, short len, short tmp, char *str)
{
	if (len)
		str[0] = '-';
	while (i)
	{
		str[len] = (char)(tmp / i) + '0';
		tmp = tmp - ((tmp / i) * i);
		i = i / 10;
		len++;
	}
	str[len] = '\0';
	return (str);
}

char			*ft_itoa_short(short c)
{
	char			*str;
	int				i;
	short			tmp;
	short			len;
	int				nega;

	nega = 0;
	if (c < 0)
	{
		nega++;
		c = -c;
	}
	i = 1;
	tmp = c;
	len = 0;
	while ((tmp = tmp / 10))
	{
		i = i * 10;
		len++;
	}
	if (!(str = ft_strnew(len + (nega ? 1 : 0) + 1)))
		return (NULL);
	len = 0;
	return (start_itoa(i, (nega ? 1 : 0), c, str));
}
