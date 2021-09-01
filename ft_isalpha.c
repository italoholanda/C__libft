/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:45:17 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/01 17:02:59 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if (((c <= 'A' ) && (c >= 'Z')) || ((c <= 'a') && (c >= 'z')))
		return (1);
	return (0);
}
