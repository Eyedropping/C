/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkyong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 19:32:39 by hkyong            #+#    #+#             */
/*   Updated: 2019/08/04 19:32:40 by hkyong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_elem(int x1, int y1, int x, int y)
{
	if ((x1 == 1 && y1 == 1) || (x1 == x && y1 == y && y != 1 && x != 1))
		ft_putchar('A');
	else if ((x1 == x && y1 == 1) || (x1 == 1 && y1 == y))
		ft_putchar('C');
	else if (y1 == 1 || y1 == y || x1 == 1 || x1 == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int x1;
	int y1;

	x1 = 1;
	y1 = 1;
	if (x > 0 && y > 0)
	{
		while (y1 <= y)
		{
			while (x1 <= x)
			{
				ft_print_elem(x1, y1, x, y);
				x1 = x1 + 1;
			}
			y1 = y1 + 1;
			ft_putchar('\n');
			x1 = 1;
		}
	}
}
