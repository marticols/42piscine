/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 15:54:24 by mcols             #+#    #+#             */
/*   Updated: 2018/06/26 15:54:28 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char	hi[4];
	char	*p_hi;

	hi[0] = 'A';
	hi[1] = 'B';
	hi[2] = 'C';
	hi[3] = 'D';
	p_hi = hi;
	printf("%d", ft_str_is_alpha(p_hi));
	return (0);
}
