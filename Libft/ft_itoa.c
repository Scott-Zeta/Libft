/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 20:49:02 by yzhang            #+#    #+#             */
/*   Updated: 2022/03/05 21:01:28 by yzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(int n)
{
	long int	long_n;
	int			len;

	if (n == 0)
	{
		return (1);
	}
	long_n = n;
	len = 0;
	if (long_n < 0)
	{
		len = 1;
		long_n = long_n * -1;
	}
	while (long_n)
	{
		len++;
		long_n = long_n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*num_string;
	long int	long_n;
	int			i;

	len = length(n);
	num_string = malloc(sizeof (*num_string) * (len + 1));
	if (!num_string)
		return (NULL);
	if (n == 0)
		num_string[0] = '0';
	long_n = n;
	if (long_n < 0)
		num_string[0] = '-';
	if (long_n < 0)
		long_n = long_n * -1;
	i = 0;
	while (long_n)
	{
		num_string[len - i - 1] = '0' + (long_n % 10);
		long_n = long_n / 10;
		i++;
	}
	num_string[len] = '\0';
	return (num_string);
}
