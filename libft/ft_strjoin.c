/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:29:22 by sservant          #+#    #+#             */
/*   Updated: 2025/11/10 09:43:49 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		i2;
	char	*str;
	int		s2_len;
	int		s1_len;

	i = 0;
	s1_len = ft_strlen((const char *) s1);
	s2_len = ft_strlen((const char *) s2);
	str = ft_calloc(s1_len + s2_len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i2 = 0;
	while (i2 < s1_len)
		str[i++] = s1[i2++];
	i2 = 0;
	while (i2 < s2_len)
		str[i++] = s2[i2++];
	return (str);
}
