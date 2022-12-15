/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:05:48 by ricda-si          #+#    #+#             */
/*   Updated: 2022/12/14 17:14:10 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_formatos(va_list args, const char variavel)
{
	int	print_len;

	print_len = 0;
	if (variavel == 'c')
		print_len += ft_putchar(va_arg(args, int));
	else if (variavel == 's')
		print_len += ft_putstr(va_arg(args, char *));
	else if (variavel == 'p')
		print_len += ft_print_ptr(va_arg(args, unsigned long long));
	else if (variavel == 'd' || variavel == 'i')
		print_len += ft_printnbr(va_arg(args, int));
	else if (variavel == 'u')
		print_len += ft_printnbru(va_arg(args, unsigned int));
	else if (variavel == 'x' || variavel == 'X')
		print_len += ft_print_hex(va_arg(args, unsigned int), variavel);
	else if (variavel == '%')
		print_len += ft_printmodule();
	return (print_len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_len;

	i = 0;
	print_len = 0;
	va_start(args, str); 
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_len += ft_formatos(args, str[i + 1]);
			i++;
		}
		else
			print_len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_len);
}

/*
int	main(void)
{
	int 	a = 159753;
	float	b = 0.542;
	float	c = 1.97;
	char	d = 'G';

	ft_printf("%d\n", a);
	ft_printf("%d\n", b);
	ft_printf("%i\n", c);
	ft_printf("%c\n", d);
	ft_printf("%%\n");
}

*/