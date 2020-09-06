/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtriston <mtriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 15:19:56 by mtriston          #+#    #+#             */
/*   Updated: 2020/09/06 15:21:34 by mtriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_strdup(void)
{
	char *str;

	printf("\\_______TESTING STRDUP_______/\n\n");
	printf("ft_strdup |%s|\n", (str = _ft_strdup("Hello, World!")));
	free(str);
	printf("   strdup |%s|\n", (str = strdup("Hello, World!")));
	free(str);
}
