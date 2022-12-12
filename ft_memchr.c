/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffi-k <rraffi-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:44:58 by rraffi-k          #+#    #+#             */
/*   Updated: 2022/11/30 17:52:33 by rraffi-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)(s + i));
		i++;
	}
	return (0);
}

// int main()
// {
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	printf("%p\n", ft_memchr(s, 2 + 256, 3));
// 	printf("%p\n", memchr(s, 2 + 256, 3));
// 	printf("%c", 258);
// 	return (0);
// }
