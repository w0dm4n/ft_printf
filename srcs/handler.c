/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <frmarinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 16:11:11 by frmarinh          #+#    #+#             */
/*   Updated: 2016/03/17 16:11:12 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int			parse_flags(t_string *string, int i, int final_i)
{
	int save;

	if (!string->s[i])
		return (final_i);
	save = i;
	while (string->s[i] && string->s[i] != '%')
		i++;
	string->final[final_i] = ft_strndup(string->s + save, i - save);
	if (string->s[i] == '%'  && string->s[i + 1])
	{
		if (!ft_strcmp(FLAG, "s"))
		{
			string->final[final_i] = va_arg(list, char*);
		}
		else if (!ft_strcmp(FLAG, "c"))
		{
			string->final[final_i] = ft_strnew(1);
			string->final[final_i][0] = va_arg(list, char);
		}
		else if (!ft_strcmp(FLAG, "d"))
		{
			string->final[final_i] = ft_atoi(va_arg(list, int));
		}
	}
	else
		return (final_i);
	parse_flags(string, i + 1, final_i + 1);
}