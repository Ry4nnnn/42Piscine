/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:29:00 by welim             #+#    #+#             */
/*   Updated: 2022/03/02 15:47:14 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prime_solver(int div, int nb)
{
	if (nb < 2 || (nb % div == 0 && nb != div))
		return (0);
	else if (nb == div || nb == 2147483647)
		return (1);
	else
		return (prime_solver(div + 1, nb));
}

int	ft_is_prime(int nb)
{
	return (prime_solver(2, nb));
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

#include <stdio.h>
int	main(void)
{
	int	i = ft_find_next_prime(2147423647);
	printf("%d", i);
	return (0);
}

