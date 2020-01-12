/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcros-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:30:57 by lcros-mo          #+#    #+#             */
/*   Updated: 2020/01/12 19:55:49 by lcros-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int sust, size_t len)
{
	int				i;
	unsigned char	*pstr;

	pstr = str;
	i = 0;
	while (len)
	{
		pstr[i] = (unsigned char)sust;
		i++;
		len--;
	}
	return (str);
}
