/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:48:56 by welim             #+#    #+#             */
/*   Updated: 2022/03/03 18:49:00 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	seperator(char c, char *charset)
{
	int	i;

	if (c == '\0')
		return (1);
	i = 0;
	while (charset[i] != 0)
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	strs;

	i = 0;
	strs = 0;
	while (str[i] != 0)
	{
		if (seperator(str[i + 1], charset) == 1
			&& seperator(str[i], charset) == 0)
			strs++;
		i++;
	}
	return (strs);
}

void	ft_putstr(char *dest, char *src, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	split(char **dest, char *str, char *charset)
{
	int		i;
	int		size;
	int		strs;

	strs = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (seperator(str[i], charset) == 1)
			i++;
		else
		{
			size = 0;
			while (seperator(str[i + size], charset) == 0)
				size++;
			dest[strs] = malloc(sizeof(char) * (size + 1));
			ft_putstr(dest[strs], str + i, size);
			i += size;
			strs++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		strs;

	strs = count_words(str, charset);
	dest = malloc(sizeof(char *) * (strs + 1));
	dest[strs] = 0;
	split(dest, str, charset);
	return (dest);
}
