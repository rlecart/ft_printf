/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <rlecart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 16:01:40 by rlecart           #+#    #+#             */
/*   Updated: 2017/05/04 02:50:07 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf/ft_printf.h"

int				main(void)
{
	ft_putnbr(printf("%s %s %s\n", "haha", "hihi", "huhu"));
	ft_putstr("\n");
	ft_putnbr(ft_printf("%s %s %s\n", "haha", "hihi", "huhu"));
	ft_putstr("\n");
	return (0);
}
