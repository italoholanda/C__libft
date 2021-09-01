/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 11:17:45 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/01 11:28:27 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	char	*new_str;
	int		i;

	new_str = malloc(sizeof(s));
	while (s[i])
	{
		new_str[i] = s[i];
		++i;
	}
	return (new_str);
}