/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <rlecart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 16:01:40 by rlecart           #+#    #+#             */
/*   Updated: 2017/05/11 16:23:40 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf/ft_printf.h"

int				main(void)
{
	ft_putnbr(printf("@moulitest: %#.o %#.0o", 0, 0));
	ft_putstr("\n");
	ft_putnbr(ft_printf("@moulitest: %#.o %#.0o", 0, 0));
	ft_putstr("\n");
	return (0);
}
