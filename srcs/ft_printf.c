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
	t_string	*string;
	int			res;
	int			i;

	i = 0;
	if (!(string = malloc(sizeof(t_string))))
		return (-1);
	if (!(string->final = (char**)malloc(sizeof(char*) * 100)))
		return (-1);
	string->s = (char*)s;
	string->args_size = get_argument(s);
	va_start(string->list, (char*)s);
	res = parse_flags(string, 0, 0);
	va_end(string->list);
	while (i < res)
	{
		ft_putstr(string->final[i]);
		i++;
	}
	return (0);
}
