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
#include <stdarg.h>
typedef struct	s_string
{
	char		*s;
	char		**final;
	va_list		list;
	int			args_size;
}				t_string;

#endif
