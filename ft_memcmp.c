/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcros-mo <lcros-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 20:30:23 by lcros-mo          #+#    #+#             */
/*   Updated: 2020/01/13 21:21:06 by lcros-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ps1;
	const unsigned char	*ps2;

	if (n)
	{
		ps1 = s1;
		ps2 = s2;
		while (n-- > 0)
			if ((*(ps1++)) != (*(ps2++)))
				return ((int)((*(--ps1)) - (*(--ps2))));
	}
	return (0);
}
