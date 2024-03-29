/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 17:34:06 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/22 17:36:43 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == 42)
	{
		if (*s1 == '\0')
			return (nmatch(s1, s2 + 1));
		if (*s1 != '\0')
			return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
	}
	if (*s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));
	if (*s1 == '\0' || *s2 == '\0')
		return (0);
	else
		return (0);
}
