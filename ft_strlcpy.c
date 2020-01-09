/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuls <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 14:04:27 by siuls             #+#    #+#             */
/*   Updated: 2020/01/08 15:40:04 by siuls            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dst, char const *src, size_t dstsize)
{
	size_t srcsize;

	srcsize = 0;
	if (*src || *dst)
	{
		while (*src)
			srcsize++;
		while ((srcsize < dstsize) && *src)
			*dst++ = *src++;
		*dst = 0;
	}
	return (srcsize);
}
