/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:51:32 by ricda-si          #+#    #+#             */
/*   Updated: 2022/10/27 12:59:49 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != c)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return ((char *)str);
}

/*
int	main()
{
	char str[] = "This isz a string";
	char c = 's';

	printf("original function: %s\n", strchr(str, c));
	printf("ft function: %s", ft_strchr(str, c));
}
*/