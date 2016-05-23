/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <jguyet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 14:17:30 by jguyet            #+#    #+#             */
/*   Updated: 2016/03/18 14:17:32 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG

#include "printf.h"

int			flag_s(t_string *string, int i)
{
	char	*tmp;

	tmp = NULL;
	tmp = get_string(string);
	if (tmp == NULL)
	{
		add_string(string, "(null)", 1);
		return (i + 1);
	}
	add_string(string, tmp, 3);
	return (i + 1);
}
