/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nonxele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:27:35 by nonxele           #+#    #+#             */
/*   Updated: 2020/07/13 14:36:18 by nonxele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int		ft_recursive_factorial(int nb)

{
	if (nb > 1)

	{
		return nb * ft_recursive_factorial(nb - 1);

	}

	return (nb);
}
