#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int fd[3];
	char *r;
	int i;
	int j;

	printf("start program\n");
	i = -1;
	j = 0;
	// fd[0] = 0;
	fd[0] = open("test.txt", O_RDONLY);
	fd[1] = open("1.txt", O_RDONLY);
	// fd[2] = open("2.txt", O_RDONLY);
	// fd[0] = 0;
	while (j < 1)
	{
		printf("file is open: fd=%d\n===\n", fd[j]);
		while (++i < 6)
		{
			// printf("i = %d\n", i);
			r = get_next_line(fd[j]);
			printf("%s", r);
			free(r);
		}
		close(fd[j]);
		j++;
	}
	return (0);
}
//実行コマンド
//gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c -o gnl_test