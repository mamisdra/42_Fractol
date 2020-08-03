/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamisdra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 15:05:39 by mamisdra          #+#    #+#             */
/*   Updated: 2019/07/06 15:05:40 by mamisdra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	if (c == '\0')
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	while (s[i])
		i++;
	while (--i >= 0)
	{
		if (s[i] == c)
		{
			return ((char *)(s + i));
		}
	}
	return (NULL);
}
