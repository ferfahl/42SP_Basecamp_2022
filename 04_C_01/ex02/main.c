/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves < feralves@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 01:18:15 by feralves          #+#    #+#             */
/*   Updated: 2022/04/17 18:47:20 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 25;
	b = 40;
	printf("The value of a is %i, the value of b is %i\n", a, b);
	ft_swap(&a, &b);
	printf("The new value of a is %i, the new value of b is %i\n", a, b);
}
