/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:12:10 by albarret          #+#    #+#             */
/*   Updated: 2018/11/12 22:03:17 by albarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s1 || !s2 || !(mem = malloc((ft_strlen(s1) + (ft_strlen(s2))))))
		return (NULL);
	while (s1[i])
	{
		mem[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		mem[i] = s2[j];
		j++;
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
