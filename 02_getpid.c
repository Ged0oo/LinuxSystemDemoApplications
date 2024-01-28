#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


void main(void)
{
	printf("PID = %d \nParent PID = %d\n", getpid(), getppid());
}
