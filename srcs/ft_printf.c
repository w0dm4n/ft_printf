/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <frmarinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 13:55:48 by frmarinh          #+#    #+#             */
/*   Updated: 2016/03/17 14:25:57 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int			get_argument(const char *s)
{
	int i;
	int args;

	i = 0;
	args = 0;
	while (s[i])
	{
		if (s[i] == '%')
			args++;
		i++;
	}
	return (args);
}

int			ft_printf(const char *s, ...)
{
	va_list		list;
	int			i;
	char		*test;
	t_string	*string;

	if (!(string = malloc(sizeof(t_string))))
		return (-1);
	va_start(list, (char*)s);
	parse_flags(string, 0, 0);
	va_end(list);
	return (0);
}
