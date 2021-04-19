/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:56:34 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/15 07:51:34 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	chng;

	a = 0;
	b = size - 1;
	while (a < (size / 2))
	{
		chng = tab[a];
		tab[a] = tab[b];
		tab[b] = chng;
		a++;
		b--;
	}
}
