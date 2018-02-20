/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luman <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 00:35:55 by luman             #+#    #+#             */
/*   Updated: 2018/02/20 00:53:55 by luman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	is_letter(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (0);
	return (0);
}

char	is_separable(char c)
{
	return (c == ' ' || c == '/' || c == ',' || c == '-' || c == '+');
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int chartype;

	i = 0;
	while (str[i] != '\0')
	{
		chartype = is_letter(str[i]);
		if (chartype == 1)
		{
			if (i == 0)
				str[i] -= 32;
			else if (is_separator(str[i - 1]))
				str[i] -= 32;
		}
		else if (chartype == 2 && i != 0 && !separator(str[i - 1]))
			str[i] += 32;
		i++;
	}
	return (str);
}
