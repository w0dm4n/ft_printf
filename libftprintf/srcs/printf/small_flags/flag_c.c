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

	tmp = 0;
	tmp = get_char(string);
	add_char(string, tmp);
	return (i + 1);
}
