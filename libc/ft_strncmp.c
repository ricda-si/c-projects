/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:51:54 by ricda-si          #+#    #+#             */
/*   Updated: 2022/10/28 17:24:31 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	size_t	i;

	i = 0;
	while ((str1[i]) && (str1[i] == str2[i]) && i < (size - 1))
		i++;
	return (((((unsigned char *)str1)[i]) - (((unsigned char *)str2)[i])));
}

/*
int main()
{
	char str1[] = "absdf";
	char str2[] = "acb";
	char str3[] = "afghij";
	char str4[] = "abcdeFGHIJ";

	printf("ft function: %d\n", ft_strncmp(str1, str2, 5));
	printf("ft function: %d\n", ft_strncmp(str1, str2, 7));
	printf("ft function: %d\n", ft_strncmp(str3, str4, 4));
	printf("ft function: %d\n\n", ft_strncmp(str3, str4, 8));

	printf("original function: %d\n", strncmp(str1, str2, 5));
	printf("original function: %d\n", strncmp(str1, str2, 7));
	printf("original function: %d\n", strncmp(str3, str4, 4));
	printf("original function: %d\n", strncmp(str3, str4, 8));
}
*/