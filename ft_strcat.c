/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:03:05 by welim             #+#    #+#             */
/*   Updated: 2022/02/23 16:03:06 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char	*dest, char	*src)
{
	int	countersrc;
	int	counterdest;

	counterdest = 0;
	countersrc = 0;
	while (dest[counterdest] != '\0')
	{
		counterdest++;
	}
	while (src[countersrc] != '\0')
	{
		dest[counterdest + countersrc] = src[countersrc];
		countersrc++;
	}
	dest[counterdest + countersrc] = '\0';
	return (dest);
}
