/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <frmarinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 20:01:31 by frmarinh          #+#    #+#             */
/*   Updated: 2016/05/27 20:01:33 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG
#include "printf.h"
#include <stdio.h>

static char		*set_lowercase(char *string)
{
	int i;

	i = 0;
	while (string[i])
	{
		if (string[i] >= 'A' && string[i] <= 'Z')
			string[i] += 32;
		i++;
	}
	return (string);
}

int				flag_p(t_string *string, int i)
{
	void	*tmp;
	char	*adress;

	if (!(adress = ft_strnew(15)))
		return (i + 1);
	tmp = va_arg(string->list, void *);
	if (tmp == NULL)
	{
		add_string(string, ft_strdup("0x0"), 3);
		return (i + 1);
	}
	adress[0] = '\0';
	adress = ft_strcat(adress, "0x");
	adress = ft_strcat(adress, \
		set_lowercase(ft_itoabase_uint((unsigned long int)tmp, \
			"0123456789ABCDEF")));
	add_string(string, adress, 3);
	return (i + 1);
}
