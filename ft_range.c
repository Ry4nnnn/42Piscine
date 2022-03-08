/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:18:17 by welim             #+#    #+#             */
/*   Updated: 2022/03/01 17:50:28 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * (max - min));
	if (tab == 0)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*
#include <stdio.h>
int	main(void)
{

	int *range;
	range = ft_range(1, 23456752);
	for (int i = 0; i <= 2342; i++)
	{
		printf("%d,\n",range[i]);
	}
}
*/
