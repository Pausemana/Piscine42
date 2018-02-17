/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luman <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 15:33:54 by luman             #+#    #+#             */
/*   Updated: 2018/02/16 15:33:59 by luman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int a;
	int b;

	a = 0;
	while (factory[a] != NULL)
	{
		b = 0;
		while (factory[a][b] != NULL)
		{
			free(factory[a][b]);
			b++;
		}
		free(factory[a++]);
	}
	free(factory);
}
