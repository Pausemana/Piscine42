/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luman <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 00:33:16 by luman             #+#    #+#             */
/*   Updated: 2018/02/15 20:57:12 by luman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int p;

	i = 0;
	p = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (++i < power)
		p = p * nb;
	return (p);
}
