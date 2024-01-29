#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

void main(void)
{
	char buf[100];
        char *newArgv[] = {NULL};
        char *newEnvp[] = {NULL};
	int status, len, retPID;

	printf("Hello Linux \ncurrent PID:%d\n", getpid());
	getchar();

	while(1)
	{
		printf("\nNagy, Edeny We Ghadeny >> ");
		fgets(buf, 100, stdin);
	        len = strlen(buf);
		buf[len-1] = 0;
		if(len == 0)
			continue;

		retPID = fork();
		if(retPID < 0)
			printf("failed to fork\n");

		else if(retPID>0)
			wait(&status);

		else if(retPID == 0)
		{
			execve(buf , newArgv , newEnvp);
			printf("Exec Failed\n");
		}
	}
}
