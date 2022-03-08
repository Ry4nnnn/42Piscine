/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:41:05 by welim             #+#    #+#             */
/*   Updated: 2022/02/22 15:13:28 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recreate the function of strlcpy()
//Copy string from src to dest up to dest size
//End with '\0'

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;

	counter = 0;
	if (size == 0)
	{
		while (src[counter])
		{
			counter++;
		}
		return (counter);
	}
	while ((counter < size - 1) && (src[counter] != '\0'))
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	while (src[counter] != '\0')
		counter++;
	return (counter);
}

//int	main(void)
//{
//	char string1[] = "ABCDEFGHIJKLMN";
//	char string2[] = "abcdefghijklmn";
//
//	ft_strlcpy(string1, string2, 0);
//	printf("%s", string1);
//	return (0);
//}
