/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 15:24:06 by albarret          #+#    #+#             */
/*   Updated: 2018/10/27 15:33:33 by albarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr;

	ptr = (unsigned char*)b;
	while (len-- > 0)
	{
		*(ptr++) = (unsigned char)c;
	}
	return (b);
}
/*
Memset - Void	*memset(void *b, int c, size_t len);
DESCRIPTION; The memset() function writes len bytes of value c (converted to an unsigned char) to the string b. #include <string.h>
Notes: typecast like this: ptr = (unsigned char*)b;
(Understand testing)*/
