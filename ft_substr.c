/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcros-mo <lcros-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 00:25:26 by lcros-mo          #+#    #+#             */
/*   Updated: 2020/01/13 00:27:56 by lcros-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ps;

	if (!s)
		return (NULL);
	if (start < ft_strlen((char *)s))
	{
		if (!(ps = ft_strndup((s + start), len)))
			return (NULL);
	}
	else if (!(ps = ft_strdup("")))
		return (NULL);
	return (ps);
}