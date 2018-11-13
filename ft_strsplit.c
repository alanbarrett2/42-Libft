/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:17:20 by albarret          #+#    #+#             */
/*   Updated: 2018/11/12 22:51:14 by albarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wordcount(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static int		ft_wordsize(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static char		**ft_split(char const *s, char c)
{
	char **mem;
	int i;
	int j;
	int k;

	i = -1;
	j = 0;
	if (!s || !c || !(mem = (char**)malloc(sizeof(char*) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	while (ft_wordcount(s, c) > ++i)
	{
		k = 0;
		printf("%d\n", i);
		if (!(mem[i] = (char*)malloc(sizeof(char) * (ft_wordsize(&s[j], c) + 1))))
			return (NULL);
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
				mem[i][k++] = s[j++];
		mem[i][k] = '\0';
	}
	mem[i] = 0;
	return (mem);
}

char	**ft_strsplit(char const *s, char c)
{
	if (!s || !c)
		return (NULL);
	return (ft_split(s, c));
}

int		main(void)
{
	char	*ptr;
	char	**new;

	ptr = "this*is**my***string";

	new = (ft_split(ptr, '*'));
	printf("%s\n%s\n%s\n" , new[0], new[1], new[3]);
	return (0);
}
