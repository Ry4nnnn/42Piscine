/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:02:32 by welim             #+#    #+#             */
/*   Updated: 2022/03/03 15:25:49 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while ((s1[counter] == s2[counter])
		&& (s1[counter] != '\0') && (s2[counter] != '\0'))
	{
		counter++;
	}
	return (s1[counter] - s2[counter]);
}

int	main(void)
{
	printf("%d", ft_strcmp("Hello", "HelloWorld"));
}

