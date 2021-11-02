/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:36:13 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/01 15:46:00 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define REF_FCT memcmp
#define TEST_FCT ft_memcmp

int	main(int argc, char **argv)
{
	char	*str1;
	char	*str2;
	size_t	range;

	if (argc != 4)
		return (printf("error args\nusage : %s <str1> <str2> <range>\n", argv[0]));
	str1 = argv[1];
	str2 = argv[2];
	range = atoi(argv[3]);
	printf("expected result	: %d\nactual result	: %d\n",
		REF_FCT(str1, str2, range), TEST_FCT(str1, str2, range));
	return (0);
}
