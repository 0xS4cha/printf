/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:54:33 by sservant          #+#    #+#             */
/*   Updated: 2025/11/12 14:15:30 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>
# include "libft/libft.h"
#include <stdio.h>

typedef struct	s_format
{
	char	flags[6];
	int		width;
	int		precision;
	char	type;
}	t_format;

int		ft_printf(const char *str, ...);
size_t	ft_writechar(char c, t_format format);
size_t	ft_writestr(char *str, t_format format);
size_t	ft_writepointer(void *ptr, int in_lowercase, t_format format);
size_t	ft_writenil(t_format format);
size_t	ft_writenull(t_format format);
size_t	ft_writenb(int nb, t_format format);
size_t	ft_writeunb(unsigned int nb, t_format format);
size_t	ft_writehex(unsigned int nb, int in_lowercase, t_format format);
size_t	ft_fillchar(char c, int	count);

#endif