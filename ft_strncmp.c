/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:36:02 by welim             #+#    #+#             */
/*   Updated: 2022/03/03 15:27:38 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	counter;

	counter = 0;
	if (counter <= n)
	{
		while ((s1[counter] == s2[counter])
			&& (s1[counter] != '\0') && (s2[counter] != '\0'))
		{
			counter++;
		}
		return (s1[counter] - s2[counter]);
	}
	return (0);
}
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_strncmp("Hello", "Hellolw", 8));
}
