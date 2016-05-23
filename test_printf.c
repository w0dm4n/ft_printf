/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <frmarinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 15:32:16 by frmarinh          #+#    #+#             */
/*   Updated: 2016/03/17 15:33:16 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>
#include <libft.h>
#include <wchar.h>
#include <stdio.h>

int		main(void)
{
	int ft, v;

	//ft_asprintf(&tmp, "%c", mychar);
	ft = ft_printf("%s, %15.5d",  "SALUT", 234444);
	v = printf("%s, %15.5d",  "SALUT", 234444);
	printf("\nretour[v->%d, ft->%d]\n", ft, v);
	return (0);
}
