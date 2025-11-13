/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writestr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:53:04 by sservant          #+#    #+#             */
/*   Updated: 2025/11/12 09:20:48 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_writestr(char *str)
{
	if (!str)
		return (ft_writenull());
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
