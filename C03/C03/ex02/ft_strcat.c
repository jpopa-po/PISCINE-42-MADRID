/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 19:16:20 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/21 20:33:51 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	while (src[a] != '\0')
		a++;
	b = 0;
	while (src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[50] = "hola";
	char	dest[50] = "Dest";

	ft_strcat(dest, src);
	printf("Resultado : %s", dest);
}*/
