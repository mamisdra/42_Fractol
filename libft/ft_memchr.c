/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamisdra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 14:59:08 by mamisdra          #+#    #+#             */
/*   Updated: 2019/07/06 14:59:09 by mamisdra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*cpys;
	char	*final;

	i = 0;
	cpys = (char *)s;
	while (i < n)
	{
		if (cpys[i] == (char)c)
		{
			final = &cpys[i];
			return (final);
		}
		i++;
	}
	return (NULL);
}
