/*
 * fork()  creates  a  new process by duplicating the calling process.
 * The child process and the parent process run in separate memory spaces.
 * On success, the PID of the child process is returned in the parent 
 * and 0 is returned in the child.
 *
 */

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void main(void)
{
	printf("Hello Linux \ncurrent PID:%d\n", getpid());
	getchar();

	int retPID = fork();

	if(retPID < 0)
		printf("failed to fork\n");
	else if(retPID>0)
	{
		while(1)
		{

			printf("\nThis is the Parent\nMy PID : %d\nMy Child PID : %d\n", getpid(), retPID);
			sleep(1);
		}
	}
	else if(retPID == 0)
	{
		while(1)
		{

                	printf("\nThis's the child\nMy PID : %d\nMy Parent PID : %d\n",getpid(),getppid());
			sleep(1);
		}
	}
}
