/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luman <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 23:21:47 by luman             #+#    #+#             */
/*   Updated: 2018/02/21 02:28:56 by luman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strcat(char *dest, char *src)
{
	int i;
	int offset;

	i = 0;
	offset = 0;
	while (dest[offset] != '\0')
		offset++;
	while (src[i] != '\0')
	{
		dest[offset + i] = src[i];
		i++;
	}
	dest[offset + i] = '\0';
	return (dest);
}
