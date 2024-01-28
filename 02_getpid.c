/*
 * This program simply gets the process Id and
 * the parent process Id from the two system
 * calls ==> getpid(), getppid()
 */

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void main(void)
{
	printf("PID = %d \nParent PID = %d\n", getpid(), getppid());
}
