/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nonxele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:28:52 by nonxele           #+#    #+#             */
/*   Updated: 2020/07/13 14:37:49 by nonxele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int factorial;
	int i;

	if (nb == 0)
		return (1);

	else if ( nb < 0)
		return (0);

	factorial = 1;
	i = 0;

	 while(i++ < nb)
	factorial *= i;

	 return (factorial);
}
