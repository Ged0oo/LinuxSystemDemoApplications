/*
 * execve() executes the program referred to by pathname. 
 * This causes the program that is currently being run by 
 * the calling process to be replaced  with  a  new  program, 
 * with newly initialized stack, heap, and (initialized and uninitialized) data segments.
 * pathname  must  be  either a binary executable, or a script
 * starting with a line of the form: #!interpreter [optional-arg]
 * RETURN VALUE : On success, execve() does not return,
 * on error -1 is returned, and errno is set appropriately.
 * int execve(const char *pathname, char *const argv[], char *const envp[]);
 */

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char *newArgv[] = {NULL};
	char *newEnvp[] = {NULL};

	if(argc != 2)
	{
		printf("Error in Number of Arguments Passed\n");
		return -1;
	}
	
	printf("\nGoing to Execute %s\n", argv[1]);
	getchar();
	execve(argv[1] , newArgv , newEnvp);


	printf("Can't replace the current pograme");
	return 0;
}
