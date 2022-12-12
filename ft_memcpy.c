/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffi-k <rraffi-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:04:37 by rraffi-k          #+#    #+#             */
/*   Updated: 2022/12/06 11:32:57 by rraffi-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	if (dest == NULL && src == NULL && n > 0)
		return (NULL);
	str1 = (char *) dest;
	str2 = (char *) src;
	i = -1;
	while (++i < n)
		str1[i] = str2[i];
	return (dest);
}

// int main()
// {
// 	unsigned char src[] = "";
// 	char tab[] = "";

//     char *str = memcpy(src, tab, 99);
// 	printf("%s\n", str);
// }
