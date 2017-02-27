/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 22:30:54 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/17 23:05:20 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
		len++;
	len--;

	while (src[i]  != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	return (0);
}
