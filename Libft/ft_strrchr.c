/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:40:22 by yzhang            #+#    #+#             */
/*   Updated: 2022/03/05 20:09:24 by yzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;
	char	*ptr;

	ptr = (char *)s;
	c = (char)c;
	result = NULL;
	while (*ptr)
	{
		if (*ptr == c)
		{
			result = ptr;
		}
		ptr++;
	}
	if (*ptr == c)
	{
		result = ptr;
	}
	return (result);
}
