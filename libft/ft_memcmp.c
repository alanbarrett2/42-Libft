/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 23:47:44 by albarret          #+#    #+#             */
/*   Updated: 2018/10/30 23:57:46 by albarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* int		memcmp(const void *s1, const void *s2, size_t n);
DESCRIPTION (compares both arrays) The memcmp() function compares byte string s1 against byte string s2. 
Both strings are assumed to be n bytes long. #include <string.h> */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (*ptr = *ptr2 && ++i < n)
	{
		ptr++;
		ptr2++;
	}
	return ((int)(*ptr - *ptr2));
}
