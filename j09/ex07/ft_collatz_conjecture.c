/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luman <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 15:35:17 by luman             #+#    #+#             */
/*   Updated: 2018/02/16 15:35:22 by luman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	static int i;

	i++;
	if (base == 1)
		return (i - 1);
	if (base & 1)
		return (ft_collatz_conjecture(base * 3 + 1));
	return (ft_collatz_conjecture(base / 2));
}
