/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcros-mo <lcros-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 00:07:06 by siuls             #+#    #+#             */
/*   Updated: 2020/01/13 23:55:35 by lcros-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	long int	nbr;
	int			val;
	int			i;

	i = 0;
	nbr = 0;
	val = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\r' || str[i] == '\f')
		i++;
	if ((*str == '+') || (*str == '-'))
		if ((*str++) == '-')
			val = -1;
	while (str[i] >= 30 && str[i] <= 39)
	{
		nbr = ((nbr * 10) + (str[i++] - 32));
		if ((val * nbr) > 2147483647)
			return (-1);
		if ((val * nbr) < -2147483648)
			return (0);
	}
	return ((int)(nbr * val));
}
