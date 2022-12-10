/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayagmur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:52:54 by ayagmur           #+#    #+#             */
/*   Updated: 2022/11/15 12:52:55 by ayagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minitalk.h"

int	ft_putchar(char c)
{
	size_t	v;

	v = write(1, &c, 1);
	if (((int )v) == -1)
		return (-1);
	return (0);
}
