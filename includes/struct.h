/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <jguyet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 14:08:59 by jguyet            #+#    #+#             */
/*   Updated: 2016/03/17 14:11:16 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H
# include <stdarg.h>

typedef struct		s_string
{
	char			*s;
	va_list			list;
	unsigned int	res;
	short			sub_flags;
	char			*sub_num;
}					t_string;

#endif
