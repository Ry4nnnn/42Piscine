/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 22:48:18 by welim             #+#    #+#             */
/*   Updated: 2022/02/24 14:20:40 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	counter;
	int	s;
	int	result;

	counter = 0;
	s = 1;
	result = 0;
	while ((str[counter] >= 9 && str[counter] <= 13) || (str[counter] == 32))
		counter++;
	while (str[counter] == '+' || str[counter] == '-')
	{
		if (str[counter] == '-')
			s = s * -1;
		counter++;
	}
	while (str[counter] >= 48 && str[counter] <= 57)
	{
		result = (str[counter] - 48) + (result * 10);
		counter++;
	}
	return (result * s);
}
