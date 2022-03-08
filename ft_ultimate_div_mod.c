/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:08:46 by welim             #+#    #+#             */
/*   Updated: 2022/02/17 15:08:48 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;

	tempa = *a / *b;
	*b = *a % *b;
	*a = tempa;
}
//
//int	main(void)
//{
//	int	a;
//	int	b;
//
//	a = 100;
//	b = 3;
//	ft_ultimate_div_mod(&a, &b);
//	printf("%d\n%d", a, b);
//}
