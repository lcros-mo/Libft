/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcros-mo <lcros-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 20:27:15 by siuls             #+#    #+#             */
/*   Updated: 2020/01/14 02:29:56 by lcros-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		dlen;
	size_t		slen;

	dlen = ft_strnlen(dst, dstsize);
	slen = ft_strlen(src);
	if (dstsize <= dlen)
		return (slen + dstsize);
	if (slen < (dstsize - dlen))
		ft_memcpy((dst + dlen), src, (slen + 1));
	else
	{
		ft_memcpy((dst + dlen), src, (slen + 1));
		dst[dstsize - 1] = '\0';
	}
	return (dlen + slen);
}
