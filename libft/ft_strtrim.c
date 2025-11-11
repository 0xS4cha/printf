/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:30:37 by sservant          #+#    #+#             */
/*   Updated: 2025/11/10 15:53:22 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*new;
	int		i;

	start = 0;
	while (s1[start] && ft_isset(s1[start], set))
		start++;
	end = ft_strlen((const char *) s1);
	if (start == end)
		return (ft_strdup(""));
	end--;
	while (end > start && ft_isset(s1[end], set))
		end--;
	len = end - start + 1;
	new = ft_calloc(len + 1, sizeof(char));
	if (!new)
		return (0);
	i = -1;
	while (++i < len)
		new[i] = s1[start + i];
	new[i] = '\0';
	return (new);
}
