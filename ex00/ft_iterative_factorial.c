/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomangen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 12:24:37 by lomangen          #+#    #+#             */
/*   Updated: 2020/07/13 16:58:02 by lomangen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int		ft_iterative_factorial(int b)
{
	int f = 1;




		if(b < 0)
		{
			return(0);
		}

		else
		{
				while(b > 0)
				{
		
					f = f * b;
					b--;
		
								}
	return f;

		}
}
		
