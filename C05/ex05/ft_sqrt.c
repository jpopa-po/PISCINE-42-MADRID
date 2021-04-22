/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:42:14 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/22 18:13:40 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	maxnb;

	maxnb = 2147395600;
	i = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	while (i * i < nb && nb <= 2147395600)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%i\n", ft_sqrt(2147395600));
	return (0);
}
*/
