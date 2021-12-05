/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <ccaswell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:55:31 by ccaswell          #+#    #+#             */
/*   Updated: 2021/10/26 19:19:42 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_atoi(const char *str)
{
	int	i;
	int	d;
	int	c;

	c = 1;
	i = 0;
	d = 0;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') \
			|| (str[i] == '\f') || (str[i] == '\r') || (str[i] == ' '))
		i++;
	if (str[i] == '-')
	{
		c = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (!((str[i] >= '0') && (str[i] <= '9')))
		return (0);
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		d = ((d * 10) + (str[i] - '0'));
		i++;
	}
	return (d * c);
}