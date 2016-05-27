/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_double.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <frmarinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 19:49:07 by frmarinh          #+#    #+#             */
/*   Updated: 2016/05/27 19:49:08 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG
#include "printf.h"

double				get_double(t_string *t)
{
	return ((double)va_arg(t->list, double));
}
