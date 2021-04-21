/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 11:56:08 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/21 19:32:02 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int				i;
	unsigned int	number;
	int				count;

	count = 0;
	i = 0;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] == 45) || (str[i] == 43))
	{
		if (str[i] == 45)
			count++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += ((int)str[i] - 48);
		i++;
	}
	if (count % 2 != 0)
		number = number * -1;
	return (number);
}
/*
int	main(void)
{
	char str[] = " ----+-+1234ab567";
	int val = ft_atoi(str);
	int	val2 = atoi(str);
	printf ("%d\n", val);
	printf ("%d", val2);
	return (0);
}
*/
