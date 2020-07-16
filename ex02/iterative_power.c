/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterative_power.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomangen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 08:55:41 by lomangen          #+#    #+#             */
/*   Updated: 2020/07/16 12:13:20 by lomangen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_iterative_power(int nb, int power)
{


	int f;

	f = 1;
	if( power < 0)
	{
		return(0);
	}

	else
	{
		while(power > 0)
		{

			f = f * nb;

		power--;
		
		}
	}

	return(f);
}


