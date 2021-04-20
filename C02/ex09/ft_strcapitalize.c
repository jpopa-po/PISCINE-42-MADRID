/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:55:50 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/20 15:06:29 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		a;
	int		b;
	char	c;

	a = 0;
	b = 1;
	while (*(str + a) != '\0')
	{
		c = *(str + a);
		if (b == 1 && c >= 97 && c <= 122)
			str[a] -= 32;
		else if (b == 0 && c >= 65 && c <= 90)
			str[a] += 32;
		if (c < 48 || (c > 57 && c < 65) || (c > 90 && c < 97) || c > 122)
			b = 1;
		else
			b = 0;
		a++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "Hola+que+tal+estas? qUe guUpo eres bro jeje";
	printf("%s\n", ft_strcapitalize(str));
}
*/
