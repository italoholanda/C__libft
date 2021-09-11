/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 17:39:51 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/11 10:53:37 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	if (!(*little) || !(*big) || (ft_strlen(big) < len))
		return ((char *)big);
	i = 0;
	little_len = ft_strlen(little);
	while (*big && (i < len))
	{
		if ((ft_strncmp(big, little, little_len) == 0)
			&& (i + little_len <= len))
			return ((char *)big);
		big++;
		i++;
	}
	return (0);
}
