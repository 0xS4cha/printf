/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:54:33 by sservant          #+#    #+#             */
/*   Updated: 2025/11/11 16:40:31 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

size_t	ft_writechar(char c);
size_t	ft_writestr(char *str);
size_t	ft_writepointer(size_t nb, int in_lowercase);
size_t	ft_writenil();
size_t	ft_writenull();
size_t	ft_writenb(int nb);
size_t	ft_writeunb(size_t nb);

#endif