/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 21:04:19 by mcols             #+#    #+#             */
/*   Updated: 2018/06/21 21:07:32 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

int		main(void)
{
	ft_print_comb2();
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
