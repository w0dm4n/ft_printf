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
	char *t, *t1;

	t = NULL;
	t1 = NULL;
	ft = ft_asprintf(&t1, "%sd, %d",  "SALUT", 234454);
	v = asprintf(&t, "%sd, %d",  "SALUT", 234454);
	if (ft_strcmp(t1, t) == 0)
		printf("\033[32m->[1]cmp[true]retour[v->%d, ft->%d]\n\033[00m", ft, v);
	else
		printf("\033[31m->[1]cmp[false][%s!=%s]retour[v->%d, ft->%d]\n\033[00m", t1, t, ft, v);
	ft_strdel(&t1);
	ft_strdel(&t);
	ft = ft_asprintf(&t1, "%s, %d",  "SALUT", 234444);
	v = asprintf(&t, "%s, %d",  "SALUT", 234444);
	if (ft_strcmp(t1, t) == 0)
		printf("\033[32m->[2]cmp[true]retour[v->%d, ft->%d]\n\033[00m", ft, v);
	else
		printf("\033[31m->[2]cmp[false][%s!=%s]retour[v->%d, ft->%d]\n\033[00m", t1, t, ft, v);
	
	ft_strdel(&t1);
	ft_strdel(&t);
	ft = ft_asprintf(&t1, "%%");
	v = asprintf(&t, "%%");
	if (ft_strcmp(t1, t) == 0)
		printf("\033[32m->[%%%%1]cmp[true]retour[v->%d, ft->%d]\n\033[00m", ft, v);
	else
		printf("\033[31m->[%%%%1]cmp[false][%s!=%s]retour[v->%d, ft->%d]\n\033[00m", t1, t, ft, v);
	ft_strdel(&t1);
	ft_strdel(&t);
	ft = ft_asprintf(&t1, "%%d%%");
	v = asprintf(&t, "%%d%%");
	if (ft_strcmp(t1, t) == 0)
		printf("\033[32m->[%%%%2]cmp[true]retour[v->%d, ft->%d]\n\033[00m", ft, v);
	else
		printf("\033[31m->[%%%%2]cmp[false][%s!=%s]retour[v->%d, ft->%d]\n\033[00m", t1, t, ft, v);

	return (0);
}
