/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcros-mo <lcros-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:57:41 by lcros-mo          #+#    #+#             */
/*   Updated: 2020/01/14 02:20:36 by lcros-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int i;

	i = 0;
	while (((char *)src)[i] != 0 && len > 0)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
		len--;
	}
	return (dst);
}
