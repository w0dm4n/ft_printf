/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <jguyet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 02:48:24 by jguyet            #+#    #+#             */
/*   Updated: 2016/03/21 02:48:27 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG

#include "printf.h"

int			flag_x(t_string *string, int i)
{
	unsigned int		tmp;
	char				*word;

	tmp = va_arg(string->list, unsigned int);
	if (string->sub_flags & SUB_SHARP)
		add_string(string, "0x", 1);
	word = ft_itoabase_uint(tmp, "0123456789abcdef");
	add_string(string, word, 3);
	return (i + 1);
}
