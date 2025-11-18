/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:21:04 by sservant          #+#    #+#             */
/*   Updated: 2025/11/12 21:30:44 by sservant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substring;
	size_t	s_len;
	size_t	copy_len;

	if (!str)
		return (NULL);
	s_len = ft_strlen(str);
	if (start >= s_len)
		return (ft_strdup(""));
	copy_len = s_len - start;
	if (copy_len > len)
		copy_len = len;
	substring = ft_calloc(copy_len + 1, sizeof(char));
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, str + start, copy_len + 1);
	return (substring);
}
