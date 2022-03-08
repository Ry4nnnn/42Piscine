/
************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:08:04 by welim             #+#    #+#             */
/*   Updated: 2022/02/24 22:02:40 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (i < size - 1)
	{
		while (n < size)
		{
			if (tab[i] > tab[n])
			{
				ft_swap(&tab[i], &tab[n]);
			}
			n++;
		}
		i++;
		n = i + 1;
	}
}

int main(void)
{
	int i;
	int size;

	i = 0;
	size = 10;
	int tab[10] = {20, 7, 6, 23, 4, 86, 3, 24, 45, 20};
	ft_sort_int_tab(tab, size);
	
	while (i < size)
	{
	printf("%d, ", tab[i]);
	i++;
	}
	return (0);
}
