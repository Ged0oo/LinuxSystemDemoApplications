/*
 * This c code doing the copy functionality
 * in kernal, it first gets user input it will 
 * be three terms, first the command whic will be cp 
 * second is the source directory then finaly the 
 * destination directory ==> cp ./source ./destination
 */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

void main(int argc, char **argv)
{
	char buf[100];

	printf("argc : %d\n", argc);	
	for(int i=0 ; i<argc ; i++)
		printf("argv[%d] : %s\n", i, argv[i]);

	if(argc != 3) 
		return;
	
	int fd1 = open(argv[1],  O_RDONLY);
	int fd2 = open(argv[2],  O_CREAT|O_WRONLY);

	int status = read(fd1, buf, 100);
	write(fd2, buf, status);
	
	close(fd1);
	close(fd2);
}
