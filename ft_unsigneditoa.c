/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigneditoa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:30:49 by ricda-si          #+#    #+#             */
/*   Updated: 2022/12/07 15:34:39 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

char	*ft_lenretu(unsigned long long n, char *str)
{
	if (n >= 10)
		str = ft_lenretu(n / 10, str);
	*str++ = (n % 10) + '0';
	*str = 0;
	return (str);
}

char	*ft_itoau(unsigned long long n)
{
	char	str[32];

	ft_lenretu(n, str);
	return (ft_substr(str, 0, (ft_strlen(str))));
}

int	ft_printnbru(unsigned n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoau(n);
	len = ft_putstr(num);
	free(num);
	return (len);
}
