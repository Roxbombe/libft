/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffi-k <rraffi-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:03:50 by rraffi-k          #+#    #+#             */
/*   Updated: 2022/12/06 11:33:32 by rraffi-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	if (!src && !dest)
		return (NULL);
	str1 = (char *)dest;
	str2 = (char *)src;
	i = -1;
	if (dest > src)
		while (n--)
			str1[n] = str2[n];
	else if (dest < src)
		while (++i < n)
			str1[i] = str2[i];
	return (dest);
}

/*
int main()
{
	const unsigned char src[] = "LearningIsFun";
    size_t          n;
    int         i;
 
    n = 7;
    i = 0;
    char *str = memmove((char *)src + 5, src + 2, 7);
	printf("%s\n", str);
}
*/