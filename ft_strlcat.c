/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuls <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 20:27:15 by siuls             #+#    #+#             */
/*   Updated: 2020/01/12 21:17:20 by lcros-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			dstlen;
	size_t			srclen;
	unsigned char	*d;
	unsigned char	*s;

	dstlen = ft_strlen(*dest);
	srclen = ft_strlen(*str);
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	if (srclen < (dstsize - dstlen))
	{
		d = dst + dstlen;
		s = src;
		while ((srclen + 1)--)
			d++ = s++;
		return (d);
	}
	else
	{
		d = dst + dstlen;
		s = src;
		while ((srclen + 1)--)
			ft_strcpy(s, d);
	}
	return (dstlen + srclen);
}
