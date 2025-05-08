/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanzanr <sdanzanr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 21:20:13 by sdanzanr          #+#    #+#             */
/*   Updated: 2025/05/09 04:18:28 by sdanzanr         ###   ########.fr       */
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

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (!(char)c)
		return ((char *)s);
	return (NULL);
}

char	*ft_strdup(const char *s)
{
	char	*r;
	char	*r_head;
	size_t	len;

	len = ft_strlen(s);
	r_head = (char *)malloc(sizeof(char) * (len + 1));
	if (r_head)
	{
		r = r_head;
		while (len--)
			*r++ = *s++;
		*r = '\0';
	}
	return (r_head);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	char	*r_head;
	size_t	size;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	r_head = (char *)malloc(sizeof(char) * size);
	if (r_head)
	{
		r = r_head;
		while (*s1)
			*r++ = *s1++;
		while (*s2)
			*r++ = *s2++;
		*r = '\0';
	}
	return (r_head);
}
