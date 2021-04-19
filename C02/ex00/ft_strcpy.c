/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 11:33:59 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/19 10:01:09 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

/*
int	main (void)
{
	char	dest[] = "jjjjjjjjjjjnghhh";
	char	src[] = "cadena2";

	printf("%s\n", dest);
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}*/
