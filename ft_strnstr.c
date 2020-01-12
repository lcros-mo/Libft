/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuls <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 15:03:21 by siuls             #+#    #+#             */
/*   Updated: 2020/01/12 20:03:29 by lcros-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#nclude "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t needle_len;

	if (*needle = 0)
		return ((char *)haystack);
	while (*needle)
		needle_len++;
	while (*hystack && (len >= needle_len))
	{
		if ((*haystack == *needle) &&
			(!ft_strncmp(haystack, needle, needle_len)))
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
