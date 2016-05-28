/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_big_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <frmarinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/28 20:20:43 by frmarinh          #+#    #+#             */
/*   Updated: 2016/05/28 20:20:48 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG

#include "printf.h"

int				flag_big_u(t_string *string, int i)
{
	unsigned long int		tmp;

	tmp = (unsigned long int)va_arg(string->list, unsigned long int);
	add_uint_long(string, tmp);
	return (i + 1);
}
