/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves < feralves@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:40:58 by feralves          #+#    #+#             */
/*   Updated: 2022/04/14 04:59:12 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_printnumbers(int hundred, int dozen, int unit)
{
	ft_putchar(hundred);
	ft_putchar(dozen);
	ft_putchar(unit);
	if (hundred != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	hundred;
	int	dozen;
	int	unit;

	hundred = '0';
	while (hundred <= '7')
	{
		dozen = hundred + 1;
		while (dozen <= '8')
		{
			unit = dozen + 1;
			while (unit <= '9')
			{
				ft_printnumbers(hundred, dozen, unit);
				unit++;
			}
			dozen++;
		}
		hundred++;
	}
}
