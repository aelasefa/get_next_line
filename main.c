#include "get_next_line.h"
#include <stdio.h>

int main(int ac, char **av)
{
	int fd = open(av[ac-1], O_RDONLY);
	int i=1;
	char *line = get_next_line(fd);
	while (line)
	{
        printf("[line %d] %s" , i, line);	
		free(line);	
		line = get_next_line(fd);
		i++;
	
	}
	close(fd);
}
