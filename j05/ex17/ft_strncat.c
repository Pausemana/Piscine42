/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luman <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 23:25:01 by luman             #+#    #+#             */
/*   Updated: 2018/02/20 23:26:33 by luman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcat(char *dest, char *src, int nb)
{
	int i;
	int offset;

	i = 0;
	offset = 0;
	while (dest[offset] != '\0')
		offset++;
	while (i < nb && src[i] != '\0')
	{
		dest[offset + i] = src[i];
		i++;
	}
	dest[offset + i] = '\0';
	return (dest);
}
