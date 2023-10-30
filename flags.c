/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:05:49 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/30 16:50:43 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	repartflag(const char c, va_list lst)
{
	int	count;

	count = 0;
	if (c == 'd' || c == 'i')
		count = nbr_count(va_arg(lst, int));				// ok
	else if (c == 'x')
		count = nbr_hexa(va_arg(lst, int), 0);				// ok juste verif si c'est int
	else if (c == 'X')
		count = nbr_hexa(va_arg(lst, int), 1);				// ok juste verif si c'est int
	else if (c == 'c')
		count = ft_putchar(va_arg(lst, int));				// ok
	else if (c == 's')
		count = ft_putstr(va_arg(lst, char *));	
	else if (c == 'u')
		count = nbr_count_unsigned(va_arg(lst, unsigned int));
	else if (c == 'p')
		count = nbr_count_p(va_arg(lst, void const *));
	return (count);
}