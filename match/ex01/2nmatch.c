/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asun <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:21:28 by asun              #+#    #+#             */
/*   Updated: 2017/01/21 19:45:51 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nmatch2(char *s1, char *s2)
{
	if (!(*s1) && !(*s2))
		return (1);
	if (*s2 == '*')
	{
		if (!(*s1))
			return (nmatch2(s1, s2 + 1));
		if (*s1)
			return (nmatch2(s1, s2 + 1) + nmatch2(s1 + 1, s2));
	}
	if (!(*s1) || !(*s2))
		return (0);
	if (*s1 != *s2)
		return (0);
	if (*s1 == *s2)
		return (nmatch2(s1 + 1, s2 + 1));
	return (-1);
}
