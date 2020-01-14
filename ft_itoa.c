/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcros-mo <lcros-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 01:56:49 by lcros-mo          #+#    #+#             */
/*   Updated: 2020/01/13 23:55:43 by lcros-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	size_t	nlen;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nlen = ft_intlen(n);
	if (!(str = ft_strnew(nlen)))
		return (NULL);
	if (n < 0)
	{
		*str = '-';
		n = -n;
	}
	str[--nlen] = ft_toint(n);
	while ((n /= 10) > 0)
		str[--nlen] = ft_toint(n);
	return (str);
}