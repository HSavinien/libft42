/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:36:52 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/02 12:46:49 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	if (!src)
		return (NULL);
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			*((char *)dst + i) = *((char *)src + i);
			i ++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			*((char *)dst + i) = *((char *)src + i);
			i --;
		}
	}
	return (dst);
}
