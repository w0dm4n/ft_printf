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

#define PRINTF_PROG

#include <printf.h>

int			ft_printf(const char *s, ...)
{
	t_string	*string;

	if (!(string = (t_string *)malloc(sizeof(t_string))))
		return (-1);
	string->s = (char*)s;
	string->res = 0;
	string->new = ft_strnew(0);
	va_start(string->list, (char*)s);
	parse_flags(string, 0);
	ft_putstr(string->new);
	ft_strdel(&string->new);
	va_end(string->list);
	return (string->res);
}


int			ft_asprintf(char **ptr, const char *s, ...)
{
	t_string	*string;

	if (!(string = (t_string *)malloc(sizeof(t_string))))
		return (-1);
	string->s = (char*)s;
	string->res = 0;
	string->new = ft_strnew(0);
	va_start(string->list, (char*)s);
	parse_flags(string, 0);
	*ptr = string->new;
	va_end(string->list);
	return (string->res);
}