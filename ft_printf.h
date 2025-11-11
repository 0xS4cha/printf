/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:54:33 by sservant          #+#    #+#             */
/*   Updated: 2025/11/11 23:32:41 by sservant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);
size_t	ft_writechar(char c);
size_t	ft_writestr(char *str);
size_t	ft_writepointer(void *ptr, int in_lowercase);
size_t	ft_writenil(void);
size_t	ft_writenull(void);
size_t	ft_writenb(int nb);
size_t	ft_writeunb(unsigned int nb);
size_t	ft_writehex(unsigned int nb, int in_lowercase);

#endif