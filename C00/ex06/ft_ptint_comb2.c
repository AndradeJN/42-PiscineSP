/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptint_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguimara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 20:02:53 by jguimara          #+#    #+#             */
/*   Updated: 2019/12/04 17:20:43 by jguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	mostrar(int xy)
{
	int num1;
	int num2;

	if (xy > 9)
	{
		num1 = xy / 10;
		num2 = xy % 10;
		ft_putchar(num1 + 48);
		ft_putchar(num2 + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(xy + 48);
	}
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	while (x < 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			mostrar(x);
			ft_putchar(' ');
			mostrar(y);
			if (x < 98 || y < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			++y;
		}
		++x;
	}
	if (x == 99)
	{
		ft_putchar('\n');
	}
}
