/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 23:26:08 by jguyet            #+#    #+#             */
/*   Updated: 2016/05/28 20:28:38 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*start_itoa(unsigned long int i, int len, \
		unsigned long int tmp, char *str)
{
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

char		*ft_uitoa_long(unsigned long int c)
{
	char				*str;
	unsigned long int	i;
	unsigned long int	tmp;
	int					len;

	i = 1;
	tmp = c;
	len = 0;
	while ((tmp = tmp / 10))
	{
		i = i * 10;
		len++;
	}
	if (!(str = ft_strnew(len + 1)))
		return (NULL);
	len = 0;
	return (start_itoa(i, 0, c, str));
}
