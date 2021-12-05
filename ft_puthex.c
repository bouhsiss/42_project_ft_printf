/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 01:47:12 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/12/05 01:48:13 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_puthex(int nbr, char *base)
{
	unsigned int	unbr;
	int				i;

	i = 0;
	unbr = nbr;
	if (unbr >= 16)
	{
		i += ft_puthex(unbr / 16, base);
		i += ft_puthex(unbr % 16, base);
	}
	else
	{
		i += ft_putchar(base[unbr]);
	}
	return (i);
}
