/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:22:59 by yzhang            #+#    #+#             */
/*   Updated: 2022/03/05 20:10:59 by yzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const	char *s, int c)
{
	char	*result;

	result = (char *)s;
	c = (char)c;
	while (*result && *result != c)
	{
		result++;
	}
	if (*result == c)
	{
		return (result);
	}
	return (NULL);
}
