/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 00:05:47 by albarret          #+#    #+#             */
/*   Updated: 2018/10/31 00:06:56 by albarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION (counts the length of the string) The strlen() function computes the length of the string s.  */

#include "libft.h"

size_t		ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
