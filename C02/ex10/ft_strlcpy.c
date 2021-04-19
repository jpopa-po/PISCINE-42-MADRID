/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:15:55 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/19 11:20:08 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (src[a] != '\0')
		a++;
	while ((src[b] != '\0') && b < (size - 1))
	{
		dest[b] = src[b];
		b++;
	}
	dest[b] = '\0';
	return (a);
}

int	main(void)
{
	char	dest[50];
	char	*src;
	int		size;

	src = "esto es una cadena con 36 caracteres";
	size = 100;
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
}
