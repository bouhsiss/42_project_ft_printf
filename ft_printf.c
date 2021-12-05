/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 01:38:15 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/12/05 02:25:25 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	fcheck(const char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'p')
	{
		write(1, "0x", 2);
		return (ft_putadd(va_arg(args, unsigned long)) + 2);
	}
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (c == 'u')
		return (ft_putnbr_u(va_arg(args, int)));
	if (c == 'x')
		return (ft_puthex(va_arg(args, int), "0123456789abcdef"));
	if (c == 'X')
		return (ft_puthex(va_arg(args, int), "0123456789ABCDEF"));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			i += fcheck(*str, args);
		}
		else
		{
			i += ft_putchar(*str);
		}
		str++;
	}
	va_end(args);
	return (i);
}
int main ()
{
    ft_printf("%s %s %s ", "xkns", "vx");
}