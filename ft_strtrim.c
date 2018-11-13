/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:28:40 by albarret          #+#    #+#             */
/*   Updated: 2018/11/13 00:31:52 by albarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_len_no_esc(int start, int end)
{

	while (start < end)
		start++;
	return (start);
}

static int		start(char const *s)
{
	int i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	return (i);
}

static int		end(char const *s)
{
	int i;
	int slen;

	i = 0;
	slen = (ft_strlen(s));
	while (s[slen] == ' ' || s[slen] == '\t' || s[slen] == '\n')
		slen--;
	return (slen);
}

char	*ft_strtrim(char const *s)
{
	int		start_len;
	int		end_len;
	char	*mem;
	char const *sptr;
	int 	i;

	i = 0;
	sptr = (char*)s;
	start_len = start(s);
	end_len = end(s);
	if (!(s || !(mem = malloc(sizeof(char) * (ft_len_no_esc(start_len, end_len)) + 1))))
		return (NULL);
	while (start_len < end_len)
	{
		mem[i] = sptr[start_len];
		start_len++;
		i++;
	}
	mem[i] = '\0';
	return (mem);
}

int		main(void)
{
	char		*mem;
	char		*ptr;

	ptr = " thisismystring ";
	ft_strtrim(ptr);
	mem = ft_strtrim(ptr);
	printf("%s\n", mem);
	return (0);
}
