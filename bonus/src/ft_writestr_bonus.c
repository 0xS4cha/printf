/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writestr_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:53:04 by sservant          #+#    #+#             */
/*   Updated: 2025/11/12 13:29:58 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf_bonus.h"

size_t	ft_writestr(char *str, t_format format)
{
	if (!str)
		return (ft_writenull(format));
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
