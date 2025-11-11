/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:45:30 by sservant          #+#    #+#             */
/*   Updated: 2025/11/11 10:16:12 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_next_part(const char *str, char c)
{
	size_t	count;

	count = 0;
	while (str[count] && str[count] != c)
		count++;
	return (count);
}

static int	count_words(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static char	**clean_strings(char	**output, size_t k)
{
	while (k > 0)
		free(output[--k]);
	free(output);
	return (0);
}

char	**ft_split(const char *str, char c)
{
	char	**output;
	size_t	k;
	size_t	len;

	k = 0;
	if (!str)
		return (0);
	output = ft_calloc(count_words(str, c) + 1, sizeof(char *));
	if (!output)
		return (0);
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
		{
			len = len_next_part(str, c);
			output[k] = ft_calloc(len + 1, sizeof(char));
			if (!output[k])
				return (clean_strings(output, k));
			ft_memcpy(output[k++], str, len);
			str += len;
		}
	}
	return (output);
}
