/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:19:27 by albarret          #+#    #+#             */
/*   Updated: 2018/10/30 14:41:53 by albarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Memset - Void	*memset(void *b, int c, size_t len);
DESCRIPTION; The memset() function writes len bytes 
of value c (converted to an unsigned char) to the string b. #include <string.h>
Notes: typecast like this: ptr = (unsigned char*)b;
memcpy is the fastest library routine for memory-to-memory copy. It is usually more efficient 
than strcpy, which must scan the data it copies or memmove, which must take precautions to handle overlapping inputs. */

#include "libft.h"

void	*ft_memcpy(void	*restrict dst, const void *restrict src, size_t n)
{
	unsigned char *ptr;
	const unsigned char *ptr2;

	ptr = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;

	while (n-- > 0)
	{
		*(ptr++) = *(ptr2++);
	}
	return (dst);
}

/* Testing #include <stdio.h> #include <string.h> && main */
int		main(void)
{
	int size = 13;
	char from[size];
	char to[size];

	strcpy(from, "Yes, I rock!");
	ft_memcpy(to,from,size);
	printf("%s",to);
	return (0);
}
