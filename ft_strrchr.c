/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:50:52 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/14 12:09:51 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*address;

	if (!c)
		return ((char *)s + ft_strlen(s));
	address = 0;
	str = (char *)s;
	while (*str)
	{
		if (*str == (char)c)
			address = str;
		str++;
	}
	return (address);
}
