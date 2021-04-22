/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 10:06:50 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/22 10:34:49 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (a <= nb)
	{
		b *= a;
		a++;
	}
	return (b);
}
/*
int	main(void)
{
	int	nb;

	nb = 0;
	printf("%d", ft_iterative_factorial(nb));
}*/
