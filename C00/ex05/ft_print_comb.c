/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguimara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 17:08:43 by jguimara          #+#    #+#             */
/*   Updated: 2019/12/01 16:30:39 by jguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c, int d, int u)
{
	if (c != d && d != u)
	{
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, &u, 1);
		if (c != 55)
		{
			write(1, ", ", 2);
		}
		if (c == 55)
		{
			write(1, "\n", 1);
		}
	}
}

void	ft_print_comb(void)
{
	int u;
	int d;
	int c;

	u = 48;
	u = 48;
	c = 48;
	while (c < 57)
	{
		d = c + 1;
		while (d < 57)
		{
			u = d + 1;
			while (u < 57)
			{
				ft_putchar(c, d, u);
				u++;
			}
			ft_putchar(c, d, u);
			d++;
		}
		ft_putchar(c, d, u);
		c++;
	}
}
