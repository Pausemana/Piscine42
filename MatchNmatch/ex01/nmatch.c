/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luman <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 00:59:33 by luman             #+#    #+#             */
/*   Updated: 2018/02/17 01:07:56 by luman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nmatch(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 == '*')
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 2));
	if (*sl == '\0' && *s2 == '*')
		return (nmatch(s1, s2 + 1));
	if (*sl == '\0' && *s2 == '\0')
		return (1);
	if (*sl == *s2 && *s1 != '\0')
		return (nmatch(s1 + 1, s2 + 1));
	return (0);
}