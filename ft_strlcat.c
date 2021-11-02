/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:20:05 by tmongell          #+#    #+#             */
/*   Updated: 2021/10/30 17:28:48 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(dst);
	while (src[j] && i < dstsize - 1 && dstsize > 0)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	if (i < dstsize)
		dst[i + 1] = '\0';
	return (ft_strlen(src) + i - j);
}
