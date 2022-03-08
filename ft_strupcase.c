/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:38:20 by welim             #+#    #+#             */
/*   Updated: 2022/02/19 20:38:22 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Change all lowercase letter to uppercase.
//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{	
		if (str[counter] >= 97 && str[counter] <= 122)
		{
			str[counter] = str[counter] - 32;
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
//	char	str[] = "onfnojkf53f";
//	printf("%s", ft_strupcase(str));
//}
