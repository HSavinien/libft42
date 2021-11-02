/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:39:00 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/02 12:57:07 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define REF_FCT memmove
#define TEST_FCT ft_memmove

int	main(int argc, char **argv)
{
	char	*src;
	char	*dst;
	char	*ref_dst;
	size_t	len;

	if (argc != 3)
		return (printf("error args\nusage : %s <str> <len>\n", argv[0]));
	len = atoi(argv[2]);
	src = argv[1];
	dst = malloc(len);
	ref_dst = malloc(len);
	printf("expected result	: %s\nactual result	: %s\n",
		REF_FCT(ref_dst, src, len), TEST_FCT(dst, src, len));
	return (0);
}
