/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 10:35:22 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/22 17:49:40 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	a;

	a = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		a *= nb;
		power--;
	}
	return (a);
}
/*
int	main(void)
{
	int nb = 4;
	int power = 2;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}*/
