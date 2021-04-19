/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 11:59:03 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/13 16:58:36 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_print(int n)
{
	char	*numeros;

	numeros = "0123456789";
	write(1, numeros + n, 1);
}

void	ft_putnumb(int n1, int n2, int n3)
{
	ft_print(n1);
	ft_print(n2);
	ft_print(n3);
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 0;
	while (n1 < 8)
	{
		n2 = n1 + 1;
		while (n2 < 9)
		{
			n3 = n2 + 1;
			while (n3 < 10)
			{
				ft_putnumb(n1, n2, n3);
				if (n1 != 7 || n2 != 8 || n3 != 9)
					write (1, ", ", 2);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
