/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffi-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:48:17 by rraffi-k          #+#    #+#             */
/*   Updated: 2022/11/14 13:48:18 by rraffi-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] = '\0';
	}
	return (j);
}

/*
int main()
{
	char dst1[] = "Yo";
	char src1[100] = "AuRevoir";

	//char dst2[] = "Bonjour";
	//char src2[100] = "AuRevoir";

	//printf("%ld\n", ft_strlen(src1));
	printf("%ld %s\n", ft_strlcpy(dst1, src1, 20), dst1);
	//printf("%ld %s\n", ft_strlcpy(dst2, src2, 10), dst2);
	return (0);
}
*/