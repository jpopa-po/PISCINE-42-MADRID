/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 23:29:57 by marvin            #+#    #+#             */
/*   Updated: 2021/04/28 12:20:41 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	char_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	c_words(char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_sep(str[i + 1], charset) == 1
			&& char_sep(str[i], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

void	put_word(char *dest, char *from, char *charset)
{
	int	i;

	i = 0;
	while (char_sep(from[i], charset) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void	put_split(char **split, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (char_sep(str[i + j], charset) == 0)
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			put_word(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		words;

	words = c_words(str, charset);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	split[words] = 0;
	put_split(split, str, charset);
	return (split);
}

void	probar_split(char *str, char *charset)
{
	char **tab;
	int	i;
	tab = ft_split(str, charset);
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
int main(void)
{
	probar_split("Este	es mi split	jeje", " ");
	return (0);
}
