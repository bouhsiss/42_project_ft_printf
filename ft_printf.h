/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 01:44:26 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/12/05 01:44:52 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdarg.h>
# include<stdio.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(const char c);
int	ft_putstr(char *str);
int	ft_putadd(unsigned long nb);
int	ft_putnbr(int nb);
int	ft_putnbr_dec(int nbr);
int	ft_puthex(int nbr, char *base);
int	ft_putnbr_u(unsigned int nb);

#endif
