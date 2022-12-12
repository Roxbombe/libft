/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffi-k <rraffi-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:37:27 by rraffi-k          #+#    #+#             */
/*   Updated: 2022/12/06 15:49:20 by rraffi-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_test_set(int c, char const *set);

static int	ft_i(char *str, char const *set)
{
	int	i;

	i = 0;
	while (str[i] && ft_test_set(str[i], set))
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*string;
	char	*str;
	size_t	i;
	size_t	j;
	size_t	cmpt;

	if (!s1)
		return (NULL);
	str = (char *)s1;
	i = ft_i(str, set);
	j = ft_strlen(str) - 1;
	while (j >= i && ft_test_set(str[j], set))
		j--;
	string = (char *)malloc(sizeof(char) * (j - i + 2));
	if (!string)
		return (0);
	cmpt = 0;
	while (str[i + cmpt] && cmpt <= j - i)
	{
		string[cmpt] = str[i + cmpt];
		cmpt++;
	}
	string[cmpt] = '\0';
	return (string);
}

static int	ft_test_set(int c, char const *set)
{
	size_t	i;
	char	*str;

	str = (char *)set;
	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		else
			i++;
	}
	return (0);
}

// int main()
// {
// 	char a[] = "   xxx  x xxx";
// 	char *b;
// 	b = ft_strtrim(a, " x");
// 	printf("%s", b);
// 	free(b);
// 	return (0);
// }
