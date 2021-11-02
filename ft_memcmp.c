/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:36:11 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/01 16:08:33 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	if (n == 0)
		return (0);
	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (str1[i] == str2[i] && i < n - 1)
		i ++;
	return (str1[i] - str2[i]);
}
