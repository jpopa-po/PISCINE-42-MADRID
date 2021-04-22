/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 18:35:16 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/22 19:00:58 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb - 1)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	b;

	if (nb < 2)
		return (2);
	b = ft_is_prime(nb);
	if (b)
		return (nb);
	while (!(ft_is_prime(nb++)))
		;
	return (nb - 1);
}
/*
int	main(void)
{
	printf("%d", ft_find_next_prime(996));
}*/
