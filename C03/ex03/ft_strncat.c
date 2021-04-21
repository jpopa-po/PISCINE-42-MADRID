/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 19:41:56 by jpopa-po          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/04/21 10:32:52 by jpopa-po         ###   ########.fr       */
=======
/*   Updated: 2021/04/20 20:53:04 by jpopa-po         ###   ########.fr       */
>>>>>>> 07ebbc6bd164642234a510eb3abb76940f1f0b43
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
<<<<<<< HEAD
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
=======
	int		i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
		i++;
	while (n < nb && src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
>>>>>>> 07ebbc6bd164642234a510eb3abb76940f1f0b43
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
