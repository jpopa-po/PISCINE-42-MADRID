/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:15:55 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/20 17:44:57 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	l;
	unsigned int	i;

	l = 0;
	while (src[l] != '\0')
	{
		++l;
	}
	if (size == 0)
	{
		return (l);
	}
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (l);
}
/*
int	main(void)
{
	char	dest[50];
	char	*src;
	int		size;

	src = "esto es una cadena con 36 caracteres";
	size = 1;
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
}*/
