/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 01:45:03 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/12/05 01:46:39 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putadd(unsigned long nb)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		i += ft_putadd(nb / 16);
		i += ft_putadd(nb % 16);
	}
	else
	{
		i += ft_putchar(base[nb]);
	}
	return (i);
}
