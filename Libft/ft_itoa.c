/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:42:04 by yzhang            #+#    #+#             */
/*   Updated: 2022/02/15 18:31:57 by yzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_neg(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

int	size(int n)
{
	int	size;

	size = 0;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*absstr(int n)
{
	long int	nbr;
	char		*absstr;
	int			bit;

	nbr = (long)n;
	bit = size(nbr);
	if (nbr < 0)
		nbr = -nbr;
	absstr = malloc(sizeof(char) * bit);
	if (nbr == 0)
		absstr[1] = '0';
	while (bit >= 0)
	{
		absstr[bit] = nbr % 10 + '0';
		bit--;
		nbr /= 10;
	}
	return (absstr);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	j = 1;
	if (is_neg(n))
	{
		result = malloc(sizeof(char) * size(n) + 2);
		result[0] = '-';
		i = 1;
	}
	else
	{
		result = malloc(sizeof(char) * (size(n) + 1));
	}
	while (i < (size(n) + 1))
	{
		result[i] = absstr(n)[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}

/*int main()
{
	int i = 0;
	printf("%s\n", ft_itoa(i));
	i = -2147483648;
	printf("%s\n", ft_itoa(i));
	i = 2147483647;
	printf("%s\n", ft_itoa(i));
	i = 23647;
	printf("%s\n", ft_itoa(i));
	i = -647;
	printf("%s\n", ft_itoa(i));
}*/
