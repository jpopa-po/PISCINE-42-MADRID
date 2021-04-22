/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 11:13:58 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/22 11:35:46 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	a;

	a = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		power--;
		a *= (ft_recursive_power(nb, power));
	}
	return (a);
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = -3;
	power = 3;
	printf("%i\n", ft_recursive_power(nb, power));
	return (0);
}*/
