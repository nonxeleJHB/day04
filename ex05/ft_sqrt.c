/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nonxele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 09:52:17 by nonxele           #+#    #+#             */
/*   Updated: 2020/07/15 10:37:45 by nonxele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_sqrt(int nb)

{
	int a;
	a = 1
		;
	 if (nb <= 0)
		 return (0);

	 if (nb == 1)
		 return (1);

while (( a * a) <= nb)

{
	if ((a * a) == nb)
		return (a);

	a++;
}
	return (0);
