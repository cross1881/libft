/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:38:22 by mrossett          #+#    #+#             */
/*   Updated: 2024/02/05 17:10:43 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_charconv(char *dst, int n, int len)
{
	if (n == 0)
		*dst = 48;
	if (n < 0)
	{
		*dst = 45;
		n *= -1;
	}
	while (n > 0)
	{
		*(dst + len--) = 48 + (n % 10);
		n /= 10;
	}
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*dst;
	int		len;

	if (n == -2147483648)
	{
		dst = (char *)malloc(sizeof(char) * 12);
		if (!dst)
			return (NULL);
		ft_strlcpy(dst, "-2147483648", 12);
		return (dst);
	}
	len = ft_intlen(n);
	dst = (char *)malloc(sizeof(char) * len + 1);
	if (!dst)
		return (NULL);
	*(dst + len--) = '\0';
	dst = ft_charconv(dst, n, len);
	return (dst);
}
