/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:09:55 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/03 17:57:05 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < 46341)
	{
		tmp = i * i;
		if (tmp == nb)
			return (i);
		else if (tmp > nb)
			return (0);
		i++;
	}
	return (0);
}
