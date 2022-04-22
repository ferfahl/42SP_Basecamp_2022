/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves < feralves@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 03:15:48 by feralves          #+#    #+#             */
/*   Updated: 2022/04/18 03:53:29 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	string[4] = {15, 2, 64, 0};
	int	size = 4;
	int	p1 = 0;
	int	p2 = 0;

	while (p1 < size)
	{
		printf("%i ", string[p1]);
		p1++;
	}
	ft_sort_int_tab(string, size);
	printf("\n");
	while (p2 < size)
	{
		printf("%i ", string[p2]);
		p2++;
	}
}
