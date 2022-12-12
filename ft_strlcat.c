/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffi-k <rraffi-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:15:29 by rraffi-k          #+#    #+#             */
/*   Updated: 2022/12/06 15:42:44 by rraffi-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l_dst;
	size_t	l_src;

	l_src = ft_strlen(src);
	if (size == 0)
		return (l_src);
	l_dst = ft_strlen(dst);
	if (l_dst > size)
		return (size + l_src);
	i = 0;
	while ((src[i] != '\0') && (l_dst + i < size - 1))
	{
		dst[l_dst + i] = src[i];
		i++;
	}
	if (size > i)
		dst[l_dst + i] = '\0';
	return (l_dst + l_src);
}

// int main()
// {
// 	char dst1[] = "";
// 	char src1[100] = "nyan !";
// 	printf("%ld %s\n", ft_strlcat(NULL, src1, 0), dst1);
// 	return (0);
// }
