/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:56:47 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/02 15:19:23 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	len;

	len = strlen(s1) + 1;
	cpy = malloc(len);
	strlcpy(cpy, s1, len);
	return (cpy);
}
