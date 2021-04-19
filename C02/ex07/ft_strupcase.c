/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:17:56 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/18 16:49:58 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 97 && str[a] <= 122)
		{
			if (str[a] != (str[a] + 32))
			{
				str[a] = (str[a] - 32);
			}
		}
		a++;
	}
	return (str);
}
/*
int	main (void)
{
	char	str[] = "cadena1";

	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}*/
