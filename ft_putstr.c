/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 01:50:36 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/12/05 01:51:33 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!(str))
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		while (str[i])
		{
			write (1, &str[i], 1);
			i++;
		}
	}
	return (i);
}