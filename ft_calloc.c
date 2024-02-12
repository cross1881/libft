/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:28:49 by mrossett          #+#    #+#             */
/*   Updated: 2024/02/10 17:10:12 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if ((size * count) > 2147483424 || (count + size) < size
		|| (count + size) < count)
		return (NULL);
	str = malloc(size * count);
	if (!str)
		return (NULL);
	ft_memset(str, 0, size * count);
	return (str);
}
