/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_lint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 05:17:08 by jguyet            #+#    #+#             */
/*   Updated: 2016/05/27 18:36:44 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char		*start_itoa(long int i, long int len, long int tmp, char *str)
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

char			*ft_itoa_lint(long int c)
{
	char		*str;
	long int	i;
	long int	tmp;
	long int	len;
	int			nega;

	if (c < -9223372036854775807)
		return (ft_strdup("-9223372036854775808"));
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
