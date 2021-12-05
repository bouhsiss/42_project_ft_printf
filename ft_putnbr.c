/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 01:48:22 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/12/05 01:49:30 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putnbr(int nb)
{
	unsigned int	n;
	int				i;

	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
		i++;
	}
	n = nb;
	if (n >= 10)
	{
		i += ft_putnbr(n / 10);
		i += ft_putnbr(n % 10);
	}
	else
	{
		n += '0';
		i += ft_putchar(n);
	}
	return (i);
}
