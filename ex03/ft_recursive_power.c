/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nonxele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:23:35 by nonxele           #+#    #+#             */
/*   Updated: 2020/07/14 11:21:43 by nonxele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int ft_recursive_power(int nb, int power)

{
	int a;

	a = 1;

	if ( power < 0)
		return (0);

	if (power == 0)
	return (1);
	
	return (nb * (ft_recursive_power(nb, power-1)));
}
