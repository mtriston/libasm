/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtriston <mtriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 15:19:42 by mtriston          #+#    #+#             */
/*   Updated: 2020/09/06 15:24:13 by mtriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_strcpy(void)
{
	char *str;

	str = (char *)malloc(100 * sizeof(char));
	if (!str)
		exit(1);
	printf("\\_______TESTING STRCPY_______/\n\n");
	printf("   strcpy |%s| str = |%s|\n", strcpy(str, "Hello, World"), str);
	printf("ft_strcpy |%s| str = |%s|\n\n", \
										_ft_strcpy(str, "Hello, World"), str);
	printf("   strcpy |%s| str = |%s|\n", strcpy(str, ""), str);
	printf("ft_strcpy |%s| str = |%s|\n\n", _ft_strcpy(str, ""), str);
	printf("   strcpy |%s| str = |%s|\n", strcpy(str, \
	"Summary: The aim of this project \
	is to get familiar with assembly language."), str);
	printf("ft_strcpy |%s| str = |%s|\n\n", _ft_strcpy(str, \
	"Summary: The aim of this project \
	is to get familiar with assembly language."), str);
	printf("   strcpy |%s| str = |%s|\n", strcpy(str, "123456789"), str);
	printf("ft_strcpy |%s| str = |%s|\n\n", _ft_strcpy(str, "123456789"), str);
	free(str);
}
