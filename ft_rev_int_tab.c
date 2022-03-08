/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:11:09 by welim             #+#    #+#             */
/*   Updated: 2022/02/17 15:22:06 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	temp;

	i = 0;
	n = size - 1;
	while (i < size / 2)
	{
		temp = tab[n - i];
		tab[n - i] = tab[i];
		tab[i] = temp;
		i++;
	}
}
//
//int	main(void)
//{
//	int	tab[6] ={10, 20, 30, 40, 50, 60};
//	int size;
//	int i;
//
//	i = 0;
//	size = 6;
//	ft_rev_int_tab(tab, size);
//	while (i < size)
//	{
//		printf("%d, ", tab[i]);
//		i++;
//	}
//	return (0);
//}
