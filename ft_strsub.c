/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:59:22 by albarret          #+#    #+#             */
/*   Updated: 2018/11/12 22:02:20 by albarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*result;

	if (!s || !(result = ft_memalloc(len + 1)))
		return (NULL);
	result = ft_strncpy(result, (char*)s + start, len);
	return (result);
}
