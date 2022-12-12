/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffi-k <rraffi-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:48:34 by rraffi-k          #+#    #+#             */
/*   Updated: 2022/12/08 14:57:43 by rraffi-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_cmpt(char const *s, char c)
{
	char	*str;
	size_t	i;
	size_t	cmpt;

	if (!s || s[0] == '\0')
		return (0);
	str = (char *)s;
	i = 0;
	cmpt = 0;
	if (str[i] != c)
		cmpt++;
	while (str[i + 1])
	{
		if (str[i] == c && str[i + 1] != c)
			cmpt++;
		i++;
	}
	return (cmpt);
}

static size_t	ft_len(char const *s, char c, size_t i)
{
	char	*str;
	size_t	j;

	str = (char *)s;
	j = i;
	while (str[j] && str[j] != c)
		j++;
	return (j - i);
}

static char	**ft_free(char	**str, size_t	l)
{
	while (l)
	{
		free(str[l]);
		l--;
	}
	free(str[0]);
	free(str);
	return (0);
}

static char	**ft_malloc(char const *s, char c)
{
	char	*s1;
	char	**str;
	size_t	i;
	size_t	l;

	str = (char **)malloc(sizeof(char *) * (ft_cmpt(s, c) + 1));
	if (!str)
		return (ft_free(str, 0));
	s1 = (char *)s;
	i = 0;
	while (s1[i] && s1[i] == c)
		i++;
	l = 0;
	while (s1[i] && l < ft_cmpt(s, c))
	{
		str[l] = (char *)malloc(sizeof(char) * (ft_len(s, c, i) + 1));
		if (!str[l])
			return (ft_free(str, l));
		i = i + ft_len(s, c, i);
		while (s1[i] == c)
			i++;
		l++;
	}
	str[l] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	l;
	size_t	j;

	if (!s)
		return (0);
	str = ft_malloc(s, c);
	i = 0;
	l = 0;
	while (((char *)s)[i])
	{
		if (((char *)s)[i] == c)
			i++;
		else
		{
			j = -1;
			while (++j < ft_len(s, c, i))
				str[l][j] = ((char *)s)[i + j];
			str[l][j] = '\0';
			l++;
			i = i + j;
		}
	}
	return (str);
}

// int main()
// {
// 	char **str;
// 	size_t i;
// 	str = ft_split("      split       this for   me  !       ", ' ');
// 	i = 0;
// 	while (str[i])
// 	{
// 		printf("%s\n", str[i]);
// 		i++;		
// 	}
// 	i = 0;
// 	while (str[i])
// 	{
// 		free(str[i]);
// 		i++;		
// 	}
// 	free(str);
// }
