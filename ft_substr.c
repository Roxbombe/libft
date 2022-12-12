/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffi-k <rraffi-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:29:29 by rraffi-k          #+#    #+#             */
/*   Updated: 2022/12/06 12:23:54 by rraffi-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len1(const char *s, unsigned int start, size_t len)
{
	size_t	len1;

	len1 = 0;
	while (start < ft_strlen(s) && len1 < len)
	{
		len1++;
		start++;
	}
	return (len1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s_bis;
	char	*str;
	size_t	i;
	size_t	len1;

	if (!s)
		return (NULL);
	len1 = ft_len1(s, start, len);
	str = (char *)malloc(sizeof(char) * (len1 + 1));
	if (!str)
		return (0);
	s_bis = (char *)s;
	i = 0;
	if (start < ft_strlen(s_bis))
	{
		while (s_bis[start] && len1)
		{
			str[i] = s_bis[start];
			start++;
			i++;
			len1--;
		}		
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
// 	char string[] = "tripouille";
// 	char *s;
// 	s = ft_substr(NULL, 0, 12);
// 	printf("%s %p\n", s, s);
// 	free(s);
// 	return(0);
// }
