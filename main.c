#include "get_next_line.h"

int main()
{
	int fd = open("text.txt", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break;
		printf("%s", line);
		free(line);
	}
}
