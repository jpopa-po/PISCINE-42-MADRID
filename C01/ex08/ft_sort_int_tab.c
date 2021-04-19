/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:38:01 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/14 18:55:28 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	cont;
	int	mem;
	int	ord;

	cont = 0;
	a = 0;
	while (a < size)
	{
		ord = a;
		cont = a + 1;
		while (cont < size)
		{
			if (tab[cont] < tab[ord])
			{
				ord = cont;
			}
			cont++;
		}
		mem = tab[a];
		tab[a] = tab[ord];
		tab[ord] = mem;
		a++;
	}
}
