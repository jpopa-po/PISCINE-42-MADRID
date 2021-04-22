/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 11:42:06 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/21 13:20:27 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				j;
	unsigned int	n;

	j = 0;
	n = 0;
	while (dest[j] != '\0')
		j++;
	while (n < nb && src[n] != '\0')
	{
		dest[j] = src[n];
		j++;
		n++;
	}
	dest[j] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[50] = "hola";
	char	dest[50] = "Dest";

	ft_strncat(dest, src, 10);
	printf("Resultado : %s", dest);
}
*/
