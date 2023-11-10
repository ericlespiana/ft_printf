/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <erpiana@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:36:40 by erpiana           #+#    #+#             */
/*   Updated: 2023/11/07 14:52:48 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnumber(int nbr)
{
	int	count;
	int	sign;

	sign = 0;
	count = 0;
	if (nbr == -2147483648)
	{
		count += ft_putstr("-2147483648");
		return (count);
	}
	if (nbr < 0)
	{
		sign = ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
		count += ft_putnumber((nbr / 10));
	count += ft_putchar((nbr % 10) + 48);
	return (count + sign);
}
