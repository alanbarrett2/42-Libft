/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 13:56:32 by albarret          #+#    #+#             */
/*   Updated: 2018/10/30 14:13:02 by albarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Bzero - Void		bzero(void *s, size_t n);
DESCRIPTION (ask questions about this)The bzero() function writes n zeroed bytes to the string s.  
If n is zero, bzero() does nothing.  #include <strings.h>
I don't see any reason to prefer bzero over memset. */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char*)s;
	while (n-- > 0)
	{
		*(ptr++) = 0;
	}
}

/* Testing #include <stdio.h> & main*/
int		main(void)
{
	char data[20];

	ft_bzero(data, 20);
	puts(data);
	return (0);
}
