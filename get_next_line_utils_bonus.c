/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edupless <edupless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:47:22 by edupless          #+#    #+#             */
/*   Updated: 2023/02/04 15:00:57 by edupless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include<stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (!*s && !c)
		return ((char *)s);
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	char	*cpy;

	dst = (char *)malloc(sizeof(dst) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dst && s1 && s2)
	{
		cpy = dst;
		while (*s1 != '\0')
			*dst++ = *s1++;
		while (*s2 != '\0')
			*dst++ = *s2++;
		*dst = '\0';
	}
	else
		return (NULL);
	return (cpy);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *str)
{
	char	*ptr;
	size_t	i;
	size_t	len;

	len = ft_strlen(str);
	i = 0;
	ptr = (char *)malloc(sizeof(char) * (len) + 1);
	if (!(ptr))
		return (NULL);
	while (str[i] && i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*sc;

	if (s == 0)
		return (0);
	size = ft_strlen(s);
	i = 0;
	if (size < start)
		len = 0;
	else if (len > size - start)
		len = size - start;
	sc = (char *)malloc(sizeof(char) * (len + 1));
	if (sc == NULL)
		return (0);
	while (len--)
	{
		sc[i] = s[start];
		start++;
		i++;
	}
	sc[i] = '\0';
	return (sc);
}
