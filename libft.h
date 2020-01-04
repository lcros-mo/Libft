/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcros-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 21:50:32 by lcros-mo          #+#    #+#             */
/*   Updated: 2019/12/15 22:41:38 by lcros-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <unistd.h>
#include <stdlib.h>

void	ft_bzero(void *str, size_t len);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	ft_memccpy(void *dest, const void *src, int c, size_t len);
void	ft_memchr(void *src, int c, size_t len);
void	ft_memcmp(const void *f, const void *s, size_t n);
void	ft_memcpy(void *dest, const void *src, size_t len);
void	ft_memmove(void *dest, void *src, size_t len);
void	*ft_memset(void *str, int sust, size_t len);
char	ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *str);
char	ft_strrchr(const char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
