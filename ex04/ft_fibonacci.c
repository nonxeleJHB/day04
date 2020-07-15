/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nonxele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:41:11 by nonxele           #+#    #+#             */
/*   Updated: 2020/07/15 10:39:18 by nonxele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_fibonacci(int index)

{
	
	if (index < 0)
	return (-1);

	if (index < 2)
		return (index);

	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));	
}
