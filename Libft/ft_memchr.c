/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:39:54 by yzhang            #+#    #+#             */
/*   Updated: 2022/02/19 19:56:13 by yzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*sc;

	i = 0;
	sc = (const char *)s;
	while (i < n)
	{
		if (sc[i] == c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
