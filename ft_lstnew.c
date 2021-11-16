/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:33:03 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/16 19:55:38 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_lst;
	
	new_lst = malloc(sizeof (t_list));
	new_lst->content = ft_memdup(content);
	new_lst->next = NULL;
	return (new_lst);
}

