/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writenull_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:14:19 by sservant          #+#    #+#             */
/*   Updated: 2025/11/12 13:41:15 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf_bonus.h"

size_t	ft_writenull(t_format format)
{
	(void) format;
	ft_putstr_fd("(null)", 1);
	return (6);
}
