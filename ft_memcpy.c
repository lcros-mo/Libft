/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcros-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:54:43 by lcros-mo          #+#    #+#             */
/*   Updated: 2019/12/15 21:05:27 by lcros-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = dest;
	s = src;
	while (len--)
		d++ = s++;
	return (d);
}
