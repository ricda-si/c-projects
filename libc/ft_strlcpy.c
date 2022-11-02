/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:52:40 by ricda-si          #+#    #+#             */
/*   Updated: 2022/10/28 17:29:57 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, int size)
{
	int	i;

	i = -1;
	if (!size)
		return (ft_strlen(src));
	while (src[++i] && i < size - 1)
		dst[i] = src[i];
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*
int main()
{
	char dst[] = "";
	char src[] = "Source asd";
	int  size = 4;

	printf("%ld\n", ft_strlcpy(dst, src, size));
}
*/