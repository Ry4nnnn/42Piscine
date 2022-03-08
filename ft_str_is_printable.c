/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:48:46 by welim             #+#    #+#             */
/*   Updated: 2022/02/19 18:48:49 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns 1 if the string contains only printable characters
//return 1 if str is empty.
//Return  0 if it contains any other character.
//#include <stdio.h>
//
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
//
//int main(void)
//{
//	char str[] = "";
//	printf("%d", ft_str_is_printable(str));
//}
