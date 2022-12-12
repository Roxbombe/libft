/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffi-k <rraffi-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:31:21 by rraffi-k          #+#    #+#             */
/*   Updated: 2022/12/01 11:32:15 by rraffi-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while ((unsigned char *)(s + i) && i > 0)
	{
		i--;
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((char *)(s + i));
	}
	if (c == '\0')
		return (((char *)&s[ft_strlen(s)]));
	return (0);
}

/*
int main()
{
	char	str[] = "bonjour";
	//printf("%s\n", str + 2);
	//printf("%s\n", ft_strrchr(str + 2, 'b'));
	printf("%s", strrchr(str + 2, 'b'));
	return (0);
}
*/