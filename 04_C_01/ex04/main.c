/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves < feralves@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:03:28 by feralves          #+#    #+#             */
/*   Updated: 2022/04/17 18:49:14 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 41;
	b = 3;
	printf("The division of %i/%i is:\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Div %u\n", a);
	printf("Mod %u\n", b);
}
