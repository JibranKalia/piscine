/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 17:01:08 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/28 21:17:26 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <unistd.h> 
# include <stdlib.h> 
# include <stdio.h> // DONT FORGET TO REMOVE 
typedef struct	s_stack	
{
	struct s_list	*next;
	void			*data;
}				t_stack;

typedef	struct	s_queue
{
	struct s_queue	*next;
	void			*data;
}				t_queue;

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	**ft_split_whitespaces(char *str);
int		eval_expr(char *str);
char	*ft_addspace(char *str, int len);
int		ft_total_str_len(char *str);
#endif