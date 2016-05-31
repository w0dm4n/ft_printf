/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <jguyet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 14:26:29 by jguyet            #+#    #+#             */
/*   Updated: 2016/03/18 14:26:31 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG

#include "printf.h"

static void	conv_l(t_string *string, wchar_t tmp)
{
	add_wchar(string, tmp);
}

static void	conv_default(t_string *string, char tmp)
{
	add_char(string, tmp);
}

int			flag_c(t_string *string, int i)
{
	if (!ft_strncmp(string->converter.type, "l", 1))
		conv_l(string, get_wchar(string));
	else
		conv_default(string, get_char(string));
	return (i + 1);
}
