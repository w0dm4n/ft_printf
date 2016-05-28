/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   omg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <frmarinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 22:00:58 by frmarinh          #+#    #+#             */
/*   Updated: 2016/05/28 20:10:37 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(int argc, char **argv)
{
	int res = 343;
		char *lol = malloc(sizeof(char) * 100);
		lol = "Coucou\0";
			printf("REAL PRINTF : %p, %p, %p\n", 0, res, lol);
	return (1);
}
