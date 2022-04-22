/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves < feralves@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 01:15:34 by feralves          #+#    #+#             */
/*   Updated: 2022/04/17 18:48:42 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 41;
	b = 3;
	c = 0;
	d = 0;
	ft_div_mod(a, b, &c, &d);
	printf("The division of %i/%i is:\n", a, b);
	printf("Div %i\n", c);
	printf("Mod %i\n", d);
}
