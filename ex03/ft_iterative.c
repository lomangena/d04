/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomangen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 09:57:14 by lomangen          #+#    #+#             */
/*   Updated: 2020/07/16 12:11:53 by lomangen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_recursive_power(int nb, int	power)
{

	int f;
	if( power < 0)
		return (0);
	if(power  > 0)
	{	 

	f = nb * ft_recursive_power(nb,power-1);
		return f;
}		
	else
		return(1);
	

}
int		main(void)
{

	printf("%d",ft_recursive_power(2,2));

		return(0);
}
