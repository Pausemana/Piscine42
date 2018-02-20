/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luman <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 04:22:07 by luman             #+#    #+#             */
/*   Updated: 2018/02/19 04:28:11 by luman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int n;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == to_find[0])
		{
			n = 1;
			while (str[i + n] == to_find[n] && to_find[n] != '\0')
				n++;
			if (to_find[n] == '\0')
				return (str + i);
		}
		i++;
	}
	return ((void*)0);
}
