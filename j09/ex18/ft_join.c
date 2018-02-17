/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luman <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 15:44:41 by luman             #+#    #+#             */
/*   Updated: 2018/02/16 15:45:02 by luman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_size(char **tab, char *sep)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
			j++;
		size += j;
		i++;
	}
	j = 0;
	while (sep[j])
		j++;
	return (i * j + size);
}

char	*ft_join(char **tab, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*ret;

	ret = (char *)malloc((sizeof(char)) * (ft_count_size(tab, sep) + 1));
	i = 0;
	k = -1;
	while (tab[i])
	{
		j = -1;
		while (tab[i][j++])
			ret[k++] = tab[i][j];
		j = 0;
		while (sep[j])
		{
			ret[k] = sep[j];
			k++;
			j++;
		}
		i++;
	}
	return (ret);
}
