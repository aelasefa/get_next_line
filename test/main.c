#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main ()
{
	int fd;
	char buff[256];
	int char_read;
	int	i;

	i = 0;
	fd = open("text.txt", O_RDONLY);
	while ((char_read = read(fd, buff, 255))  && i < 200000)
	{
		i += 255;
		buff[char_read] = '\0';
		char_read = 0;
		printf("%s\n", buff);
	}
}
