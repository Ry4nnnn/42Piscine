/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:15:04 by welim             #+#    #+#             */
/*   Updated: 2022/02/19 21:15:06 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 65 && str[counter] <= 90)
		{
			str[counter] = str[counter] + 32;
			counter++;
		}
		else
			counter++;
	}
	return (str);
}
//
//int	main(void)
//{
//	char	str[] = "fgg443ff";
//	printf("%s", ft_strlowcase(str));
//}
