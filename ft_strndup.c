/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcros-mo <lcros-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 00:28:09 by lcros-mo          #+#    #+#             */
/*   Updated: 2020/01/13 00:29:20 by lcros-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	size_t	l;
	char	*p;

	l = ft_strnlen(s1, n);
	if (!(p = ft_strnew(l)))
		return (NULL);
	p[l] = '\0';
	return (ft_memcpy(p, s1, l));
}