/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:06:02 by yzhang            #+#    #+#             */
/*   Updated: 2022/02/19 20:32:37 by yzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	char			*srcc;
	char			*dstc;

	i = 0;
	srcc = (char *)src;
	dstc = (char *)dst;
	if (!dst && !src)
		return (0);
	if (srcc < dstc)
		while ((int)(--len) >= 0)
			*(dstc + len) = *(srcc + len);
	else
	{
		while (i < len)
		{
			dstc[i] = srcc[i];
			i++;
		}
	}
	return (dst);
}
