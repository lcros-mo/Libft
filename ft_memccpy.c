/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcros-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:46:51 by lcros-mo          #+#    #+#             */
/*   Updated: 2019/12/15 21:02:20 by lcros-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	int		i;
	char	*pdest;

	i = 0;
	while (src[i] != 0 || src[i] != c || i < len)
	{
		dest[i] = src[i];
		i++;
		len--;
	}
	if (src[i] = c)
		dest[i] = c;
	pdest = dest;
	return (pdest);
}
