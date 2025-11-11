/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:21:04 by sservant          #+#    #+#             */
/*   Updated: 2025/11/10 13:13:40 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substring;
	size_t	s_len;
	size_t	copy_len;

	s_len = ft_strlen(str);
	if ((size_t) start > ft_strlen((const char *) str))
		return (ft_strdup(""));
	copy_len = s_len - start;
	if (copy_len > len)
		copy_len = len;
	substring = ft_calloc(copy_len + 1, sizeof(char));
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, str + start, copy_len + 1);
	substring[copy_len + 1] = '\0';
	return (substring);
}
