/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:24:20 by welim             #+#    #+#             */
/*   Updated: 2022/02/25 16:24:22 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	output;

	output = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	while (nb > 1)
	{
		output = output * (nb - 1);
		nb--;
	}
	return (output);
}
