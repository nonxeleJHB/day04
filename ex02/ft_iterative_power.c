/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nonxele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 09:45:20 by nonxele           #+#    #+#             */
/*   Updated: 2020/07/14 10:18:42 by nonxele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int		ft_iterative_power(int nb, int power)

{
	int a;
	
	a = 1;
	if (power < 0)
	return(0);

	while (power > 0)
	{	
		a = nb * a;
		power --;
	}
		
	return (a);
}


