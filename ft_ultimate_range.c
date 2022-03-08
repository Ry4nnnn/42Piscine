/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 21:49:47 by welim             #+#    #+#             */
/*   Updated: 2022/02/28 21:49:49 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	*range = malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!*range)
		return (-1);
	while (max > min)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main()
{
	int	i;
	int	*range;

	i = 0;
	ft_ultimate_range(&range, -100, 100);
	while(i < 200)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
*/
