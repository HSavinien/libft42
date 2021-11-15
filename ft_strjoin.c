/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:30:00 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/15 19:01:46 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>//============================================================DEBUG

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*new_str;

	len = ft_strlen(s1) + ft_strlen(s2);
	new_str = malloc(len + 1);
//	printf("debug : malloc of size %lu\n", len + 1);//==========================DEBUG
	if (new_str == NULL)
		return (NULL);
	ft_strlcat (new_str, s1, len + 1);
	ft_strlcat (new_str, s2, len + 1);
	new_str[len] = '\0';
	return (new_str);
}
