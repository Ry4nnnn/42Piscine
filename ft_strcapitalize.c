/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:57:55 by welim             #+#    #+#             */
/*   Updated: 2022/02/20 20:58:00 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
char	ft_lowtoup(char alphabet)
{
	if (alphabet >= 97 && alphabet <= 122)
	{
		alphabet = alphabet - 32;
	}
	return (alphabet);
}

char	ft_uptolow(char alphabet)
{
	if (alphabet >= 65 && alphabet <= 90)
	{
		alphabet = alphabet + 32;
	}
	return (alphabet);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			str[i] = ft_lowtoup(str[i]);
			i++;
		}
		else if ((str[i - 1] >= 65 && str[i - 1] <= 90)
			|| (str[i - 1] >= 97 && str[i - 1] <= 122)
			|| (str[i - 1] >= 48 && str[i - 1] <= 57))
		{
			str[i] = ft_uptolow(str[i]);
			i++;
		}
		else
		{
			str[i] = ft_lowtoup(str[i]);
			i++;
		}
	}
	return (str);
}
//
//int	main(void)
//{
//	char	str[] = "Salut, comment tu vas ? cinquante+et+un";
//	printf("%s", ft_strcapitalize(str));
//}
