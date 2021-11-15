/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:36:52 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/15 16:49:44 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>//============================================================DEBUG

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	if (!src || !dst)
		return (NULL);
	if (dst < src)
	{
		printf("debug : dst < src\n");//========================================DEBUG
		i = 0;
		while (i < len)
		{
			*((char *)dst + i) = *((char *)src + i);
			i ++;
		}
	}
	else
	{
		printf("debug : dst > src\n");//========================================DEBUG
		if (ft_strlen(src) < len)
			i = ft_strlen(src);
		else
			i = len;
		while (i > 0)
		{
			*((char *)dst + i) = *((char *)src + i);
			printf("debug : added %c to dst\n", *((char *)src + i));//==========DEBUG
			i --;
		}
		*((char *)dst + i) = *((char *)src + i);
	}
	return (dst);
}
