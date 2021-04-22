/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 11:42:19 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/21 20:34:31 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	aux;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			aux = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					aux = 1;
				i++;
			}
			if (aux == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

/*int	main(void)
{
	char str[] = "HOLALALAQUEJAJAYUPIpapapapapap";
	char find[] = "P";
	printf("%s\n", ft_strstr(str, find));
    printf("%s", strstr(str, find));
	return (0);
}*/
