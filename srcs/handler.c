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
	int	sub_flags;

	sub_flags = 0;
	if (!string->s[i])
		return (final_i);
	save = i;
	while (string->s[i] && string->s[i] != '%')
		i++;
	if (i > save)
	{
		string->final[final_i] = ft_strndup(string->s + save, i - save);
		final_i++;
	}
	if (string->s[i] && string->s[i] == '%' && string->s[i + 1])
	{
		while ((string->s[i + 1] && string->s[i + 1] == '#')
			|| (string->s[i + 1] && string->s[i + 1] == '0')
			|| (string->s[i + 1] && string->s[i + 1] == '-')
			|| (string->s[i + 1] && string->s[i + 1] == '+'))
		{
			if (string->s[i + 1] == '#' && !(sub_flags & 1024))
				sub_flags += 1024;
			else if (string->s[i + 1] == '0' && !(sub_flags & 2048))
				sub_flags += 2048;
			else if (string->s[i + 1] == '-' && !(sub_flags & 4096))
				sub_flags += 4096;
			else if (string->s[i + 1] == '+' && !(sub_flags & 8192))
				sub_flags += 8192;
			i++;
		}
		if (!ft_strncmp("s", FLAG, 1))
		{
			//string->final[final_i] = add_sub_flags(sub_flags, va_arg(string->list, char*));
			string->final[final_i] = va_arg(string->list, char*);
			if (string->final[final_i] == NULL)
				string->final[final_i] = ft_strdup("(null)");
			final_i++;
			i++;
		}
		else if (!ft_strncmp("ld", FLAG, 2))
		{
			if (sub_flags & 8192)
			{
				string->final[final_i] = ft_strdup("+");
				string->final[final_i] = ft_strcat(string->final[final_i], ft_itoa(va_arg(string->list, unsigned int)));
			}
			else
				string->final[final_i] = ft_itoa(va_arg(string->list, unsigned int));
			final_i++;
			i += 2;
		}
		else if (!ft_strncmp("c", FLAG, 1))
		{
			string->final[final_i] = ft_strnew(1);
			string->final[final_i++][0] = va_arg(string->list, int);
			i++;
		}
		else if (!ft_strncmp("d", FLAG, 1))
		{
			string->final[final_i++] = ft_itoa(va_arg(string->list, int));
			i++;
		}
	}
	else
		return (final_i);
	return (parse_flags(string, i + 1, final_i + 1));
}