/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luman <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 15:28:29 by luman             #+#    #+#             */
/*   Updated: 2018/02/16 15:32:17 by luman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	bigrot(char a)
{
	a = a - 'A';
	a = ((a + 42) % 26);
	a = a + 'A';
	return (a);
}

char	litrot(char a)
{
	a = a - 'a';
	a = ((a + 42) % 26);
	a = a + 'a';
	return (a);
}

char	rot(char a)
{
	if (a >= 'A' && a <= 'Z')
		return (bigrot(a));
	else if (a >= 'a' && a <= 'z')
		return (litrot(a));
	else
		return (a);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = rot(str[i]);
		i++;
	}
	return (str);
}
