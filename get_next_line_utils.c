/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanzanr <sdanzanr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 21:20:13 by sdanzanr          #+#    #+#             */
/*   Updated: 2025/05/09 00:39:39 by sdanzanr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int num)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == (char)num)
			return ((char *)str);
		str++;
	}
	if ((char)num == '\0')
		return ((char *)str);
	return (NULL);
}

char	*ft_strdup(const char *string)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(string) + 1));
	if (!ptr)
		return (ptr);
	while (string[i])
	{
		ptr[i] = string[i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}


char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr)
		return (NULL);
	while (s1[j])
	{
		ptr[i++] = s1[j];
		j++;
	}
	j = 0;
	while (s2[j])
	{
		ptr[i++] = s2[j];
		j++;
	}
	ptr[i] = 0;
	return (ptr);
}
