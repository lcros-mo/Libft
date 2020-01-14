/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcros-mo <lcros-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:46:51 by lcros-mo          #+#    #+#             */
/*   Updated: 2020/01/13 21:44:18 by lcros-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*pdst;
	const unsigned char	*psrc;

	if (n)
	{
		pdst = dst;
		psrc = src;
		if (pdst || psrc)
			while (n-- > 0)
				if ((*(pdst++) = (*(psrc++))) == (unsigned char)c)
					return (pdst);
	}
	return (NULL);
}
