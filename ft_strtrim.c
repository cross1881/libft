/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:33:29 by mrossett          #+#    #+#             */
/*   Updated: 2024/02/05 16:27:56 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *str, char const *set)
{
	size_t	finish;

	if (!str || !set)
		return (NULL);
	while (*str != '\0' && ft_strchr(set, *str))
		str++;
	finish = ft_strlen(str);
	while (finish && ft_strchr(set, str[finish]))
		finish--;
	return (ft_substr(str, 0, finish + 1));
}
