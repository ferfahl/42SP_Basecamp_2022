/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves < feralves@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 05:57:16 by feralves          #+#    #+#             */
/*   Updated: 2022/04/22 22:21:39 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printnumbers(int n)
{
	int	y;
	int	z;

	y = n / 10 + '0';
	z = n % 10 + '0';
	write(1, &y, 1);
	write(1, &z, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_printnumbers(a);
			write(1, " ", 1);
			ft_printnumbers(b);
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}	
		a++;
	}
}
