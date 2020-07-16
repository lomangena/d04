/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomangen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:11:01 by lomangen          #+#    #+#             */
/*   Updated: 2020/07/15 17:01:24 by lomangen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)	{		

		if(nb < 0)
			return(0);
		if (nb == 0 || nb == 1)
			 return (1);
		return nb * ft_recursive_factorial(nb -1);
	
}


