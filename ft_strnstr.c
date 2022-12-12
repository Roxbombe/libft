/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffi-k <rraffi-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:13:55 by rraffi-k          #+#    #+#             */
/*   Updated: 2022/12/01 11:56:05 by rraffi-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*big1;
	char	*little1;
	size_t	i;
	size_t	j;

	big1 = (char *)big;
	little1 = (char *)little;
	i = 0;
	if (ft_strlen(little) == 0)
		return (big1);
	while ((i < len) && big1[i])
	{
		if (big1[i] == little1[0])
		{
			j = 0;
			while (little1[j] && little1[j] == big1[i + j] && i + j < len)
				j++;
			if (j == ft_strlen(little1))
				return (&big1[i]);
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char little[] = "abcd";
// 	char big[] = "aaabcabcd";
// 	printf("%s\n", ft_strnstr(big, little, 9));
// 	printf("%s", strnstr(big, little, 9));
// 	return 0;
// }
