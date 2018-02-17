/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luman <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 14:33:11 by luman             #+#    #+#             */
/*   Updated: 2018/02/14 01:37:40 by luman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char *begin;
	char *end;
	char c;

	begin = str;
	end = str;
	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (begin < end)
	{
		c = *end;
		*end = *begin;
		*begin = c;
		end--;
		begin++;
	}
	return (str);
}
