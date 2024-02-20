/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_un_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <erpiana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:39:12 by erpiana           #+#    #+#             */
/*   Updated: 2024/02/20 01:05:43 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_un_nbr(unsigned int nbr)
{
	unsigned int	count;

	count = 0;
	if (nbr >= 10)
		count += ft_put_un_nbr(nbr / 10);
	count += ft_putchar((nbr % 10) + 48);
	return (count);
}
