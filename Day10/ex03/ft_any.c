/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 18:02:25 by mcols             #+#    #+#             */
/*   Updated: 2018/07/02 18:02:27 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char *))
{
	int		i;

	i = -1;
	while (tab[++i] != '\0')
		if (f(tab[i]) == 1)
			return (1);
	return (0);
}
