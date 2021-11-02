/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:38:35 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/02 16:24:39 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;

	if (start >= ft_strlen(s))
		return (NULL);
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	new_str = malloc(len + 1);
	ft_strlcpy(new_str, s + start, len + 1);
	return (new_str);
}