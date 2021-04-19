/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:51:28 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/18 16:55:09 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 65 && str[a] <= 90)
		{
			if (str[a] != (str[a] - 32))
			{
				str[a] = (str[a] + 32);
			}
		}
		a++;
	}
	return (str);
}
/*
int	main (void)
{
	char	str[] = "HOLA-";

	ft_strlowcase(str);
	printf("%s\n", str);
	return (0);
}*/
