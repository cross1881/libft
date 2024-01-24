/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:10:45 by mrossett          #+#    #+#             */
/*   Updated: 2024/01/24 16:54:03 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*t;

	t = (char *)s;
	i = ft_strlen(s);
	while (i--)
	{
		if (*(t + i) == (char)c)
			return (t + i);
	}
	return (NULL);
}
