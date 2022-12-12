/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffi-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:56:41 by rraffi-k          #+#    #+#             */
/*   Updated: 2022/11/09 16:56:43 by rraffi-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	long unsigned int	i;
	char				*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

/*
int main()
{
	char a[5] = {1};
	char b[5] = {1};
	ft_memset(a, 2, 4);
	//memset(b, 2, 4);
	//printf("%s\n", a);
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	//printf("%d %d %d %d %d", b[0], b[1], b[2], b[3], b[4]);
	return (0);
}
*/