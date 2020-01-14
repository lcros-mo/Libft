/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcros-mo <lcros-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 15:03:21 by siuls             #+#    #+#             */
/*   Updated: 2020/01/13 20:44:09 by lcros-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t needle_len;

	needle_len = 0;
	if (!(*needle))	
		return ((char *)haystack);
	while (*needle)
		needle_len++;
	while (*haystack && (len >= needle_len))
	{
		if ((*haystack == *needle) &&
			(!ft_strncmp(haystack, needle, needle_len)))
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}