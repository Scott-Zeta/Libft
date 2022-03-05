/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:40:22 by yzhang            #+#    #+#             */
/*   Updated: 2022/02/19 19:53:47 by yzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*copy;

	copy = s;
	i = ft_strlen(s);
	s += i;
	while (*s != *copy && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
