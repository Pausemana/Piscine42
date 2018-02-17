/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luman <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 20:53:17 by luman             #+#    #+#             */
/*   Updated: 2018/02/15 20:51:21 by luman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb <= 1)
		return (1);
	result = 1;
	while (nb != 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
