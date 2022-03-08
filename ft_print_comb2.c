/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:23:40 by welim             #+#    #+#             */
/*   Updated: 2022/02/15 18:46:36 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(char a)
{
	write(1, &a, 1);
}

void	display(int nb)
{
	int	first;
	int	second;

	if (nb > 9)
	{
		first = nb / 10;
		second = nb % 10;
		print_num(first + '0');
		print_num(second + '0');
	}
	else
	{
		print_num('0');
		print_num(nb + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	o;

	i = 0;
	while (i <= 99)
	{
		o = i + 1;
		while (o <= 99)
		{
			display(i);
			print_num(' ');
			display(o);
			if (i < 98 || o < 99)
			{
				print_num(',');
				print_num(' ');
			}
			o++;
		}
		i++;
	}
}
