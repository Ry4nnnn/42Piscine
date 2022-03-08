/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 20:27:26 by welim             #+#    #+#             */
/*   Updated: 2022/02/26 20:27:28 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while ((s1[counter] == s2[counter])
		&& (s1[counter] != '\0') && (s2[counter] != '\0'))
	{
		counter++;
	}
	return (s1[counter] - s2[counter]);
}

void	sort(int size, char **str)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < size - 1)
	{
		j = 1;
		while (j < size - 1)
		{
			if (ft_strcmp(str[j], str[j + 1]) > 0)
			{
				temp = str[j + 1];
				str[j + 1] = str[j];
				str[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	res;

	i = 1;
	j = 1;
	res = 0;
	if (argc == 1)
		return (0);
	sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}
