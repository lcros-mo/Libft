/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcros-mo <lcros-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 01:16:06 by lcros-mo          #+#    #+#             */
/*   Updated: 2020/01/13 01:19:50 by lcros-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	ls1;
	size_t	lset;

	if (!s1 || !set)
		return (NULL);
	ls1 = 0;
	while ((s1[ls1]) && (ft_strchr(set, s1[ls1])))
		ls1++;
	if ((lset = ft_strlen(&s1[ls1])))
		while (((s1[ls1 + lset - 1])) && (ft_strchr(set, s1[ls1 + lset - 1])))
			lset--;
	return (ft_substr(s1, ls1, lset));
}