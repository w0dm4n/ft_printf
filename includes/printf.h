/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <jguyet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 14:11:36 by jguyet            #+#    #+#             */
/*   Updated: 2016/03/17 14:12:48 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
#include "libft.h"
#include "struct.h"
#include <stdarg.h>
#include <stdlib.h>

# define FLAG string->s + (i + 1)

int			ft_printf(const char *s, ...);
int			parse_flags(t_string *string, int i, int final_i);

#endif
