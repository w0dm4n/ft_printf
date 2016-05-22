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

int		main(void)
{
	char *tmp;
	int ft, v;

	tmp = NULL;

	//ft_asprintf(&tmp, "%c", mychar);
	ft = ft_printf("%C",  L'Ω');
	v = printf("%C",  L'Ω');
	printf("\nretour[v->%d, ft->%d]\n", ft, v);
	return (0);
}
