/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibour <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:41:00 by ibour             #+#    #+#             */
/*   Updated: 2024/07/18 09:41:01 by ibour            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*buffer;

	if (min >= max)
		return (0);
	range = max - min - 1;
	buffer = malloc(range * sizeof(int));
	if (buffer == NULL)
		return (0);
	i = 0;
	while (i <= range)
	{
		buffer[i] = min + i;
		i++;
	}
	return (buffer);
}

#include <stdio.h>
int main(void)
{
	int	min = 2;
	int max = 5;
	ft_range(min, max);
	printf("i is %d, setting buffer[%d] to %d\n", i, i, min+i);
}
