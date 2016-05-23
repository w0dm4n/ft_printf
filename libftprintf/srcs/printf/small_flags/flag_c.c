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

int			flag_c(t_string *string, int i)
{
	char	tmp;
	char	*fi;

	tmp = 0;
	tmp = get_char(string);
	if (tmp == 0)
	{
		add_string(string, "(null)", 1);
		return (i + 1);
	}
	fi = ft_strnew(1);
	fi[0] = tmp;
	add_string(string, fi, 3);
	return (i + 1);
}
