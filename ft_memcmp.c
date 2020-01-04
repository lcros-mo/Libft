/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcros-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 20:30:23 by lcros-mo          #+#    #+#             */
/*   Updated: 2019/12/15 21:09:25 by lcros-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memcmp(const void *f, const void *s, size_t n)
{
	int					i;
	const unsigned char	*pf;
	const unsigned char	*ps;

	i = 0;
	pf = f;
	ps = s;
	if (n)
	{
		while (pf[i] == ps[i])
			i++;
		if (i == n)
			return (0);
		return (pf[i] - ps[i]);
	}
}
