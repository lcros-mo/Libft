/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcros-mo <lcros-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:52:25 by lcros-mo          #+#    #+#             */
/*   Updated: 2020/01/14 02:03:54 by lcros-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t len)
{
	size_t		i;
	char	*rest;

	rest = NULL;
	i = 0;
	while (((char *)src)[i] != 0 ||((char *) src)[i] != c || i != len)
		i++;
	while (((char *)src)[i] != 0)
	{
		*rest = ((char *)src)[i];
		i++;
		rest++;
	}
	return (rest);
}
