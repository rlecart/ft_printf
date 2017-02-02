/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 12:20:23 by pbernier          #+#    #+#             */
/*   Updated: 2017/02/02 23:01:41 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr(int n)
{
	int		len;
	char	tab[ft_intlen(n) + 1];

	len = ft_intlen(n);
	if (n < 0)
		tab[0] = '-';
	tab[len] = '\0';
	while (--len != -1 && tab[len] != '-')
	{
		if ((n % 10) < 0)
			tab[len] = -(n % 10) + 48;
		else
			tab[len] = (n % 10) + 48;
		n /= 10;
	}
	ft_putstr(tab);
}
