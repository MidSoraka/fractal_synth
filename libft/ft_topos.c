/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_topos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaine <vlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:02:59 by vlaine            #+#    #+#             */
/*   Updated: 2021/12/08 13:09:00 by vlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_topos(int n)
{
	size_t	nbr;
	int		neg;

	neg = 1;
	if (n < 0)
		neg = -1;
	if (n == -2147483648)
		nbr = 2147483648;
	else
		nbr = n * neg;
	return (nbr);
}
