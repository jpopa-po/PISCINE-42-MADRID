/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 19:41:56 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/20 20:53:04 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				count;
	unsigned int	n;

	count = 0;
	n = 0;
	while (dest[count] != '\0')
		count++;
	while (n < nb && src[n] != '\0')
	{
		dest[count] = src[n];
		count++;
		n++;
	}
	dest[count] = '\0';
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
