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

static void	conv_l(t_string *string, wchar_t *tmp)
{
	int n;

	if (tmp == NULL)
	{
		add_string(string, "(null)", 1);
		return ;
	}
	n = -1;
	while (tmp[++n])
		add_wchar(string, tmp[n]);
}

static void	conv_default(t_string *string, char *tmp)
{
	if (tmp == NULL)
	{
		add_string(string, "(null)", 1);
		return ;
	}
	add_string(string, tmp, 3);
}

int			flag_s(t_string *string, int i)
{
	if (!ft_strncmp(string->converter.type, "l", 1))
		conv_l(string, get_wstring(string));
	else
		conv_default(string, get_string(string));
	return (i + 1);
}
