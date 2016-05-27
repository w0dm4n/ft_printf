/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <jguyet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 11:45:26 by jguyet            #+#    #+#             */
/*   Updated: 2016/05/22 11:45:27 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG

#include "printf.h"

int					get_int(t_string *t)
{
	return ((int)va_arg(t->list, int));
}

unsigned int		get_uint(t_string *t)
{
	return ((unsigned int)va_arg(t->list, unsigned int));
}
