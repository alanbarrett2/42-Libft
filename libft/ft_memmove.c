/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 18:10:31 by albarret          #+#    #+#             */
/*   Updated: 2018/10/30 18:36:06 by albarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* void	*memmove(void *dst, const void *src, size_t len);
DESCRIPTION the memmove() function copies len bytes from string src to string dst. 
The two strings may overlap; the copy is always done in a non-destructive manner. */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	i = 0;
	if (ptr2 < ptr)
		while (++i <= len)
			ptr[len - i] = ptr2[len - i];
	else
		while (len-- > 0)
			*(ptr++) = *(ptr2++);
	return (dst);
}
