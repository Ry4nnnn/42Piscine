/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:28:47 by welim             #+#    #+#             */
/*   Updated: 2022/02/25 16:29:47 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	divider;

	divider = 2;
	if (nb <= 1)
		return (0);
	while (divider <= nb / 2)
	{
		if (nb % divider == 0)
			return (0);
		divider++;
	}
	return (1);
}
