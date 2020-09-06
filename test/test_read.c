/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtriston <mtriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 15:19:33 by mtriston          #+#    #+#             */
/*   Updated: 2020/09/06 15:23:30 by mtriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	lauch_test(int fd, char *buf, int count)
{
	if (fd != -1)
		fd = open("test/text.txt", O_RDONLY);
	memset(buf, '\0', count);
	errno = 0;
	printf("return %zd\n", read(fd, buf, count));
	printf("buf = |%s|\n", buf);
	perror("   read errno");
	close(fd);
	if (fd != -1)
		fd = open("test/text.txt", O_RDONLY);
	memset(buf, '\0', count);
	errno = 0;
	printf("return %zd\n", _ft_read(fd, buf, count));
	printf("buf = |%s|\n", buf);
	perror("ft_read errno");
	close(fd);
}

void	test_read(void)
{
	void *buf;

	buf = (void *)calloc(30, sizeof(char));
	printf("\\_______TESTING READ_______/\n\n");
	printf("\n***Testing valid case***\n\n");
	lauch_test(42, buf, 30);
	printf("\n***Testing invalid file descriptor***\n\n");
	lauch_test(-1, buf, 30);
}
