/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luman <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 05:17:51 by luman             #+#    #+#             */
/*   Updated: 2018/02/15 05:25:18 by luman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_eight_queen_puzzle(int a)
{
	if (a != 92)
		return (ft_eight_queen_puzzle(a + 1));
	return (a);
}

int	ft_eight_queens_puzzle(void)
{
	return (ft_eight_queen_puzzle(1));
}
