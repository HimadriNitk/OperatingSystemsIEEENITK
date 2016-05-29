
#include <stdio.h>
#include <unistd.h>

int main()
{

pid_t child;
child = fork();

if (child==0)
{
	printf("In the child process with ID = %d",getpid());
	printf("\n Process ID of parent is = %d \n",getppid());
}

else
{
	printf("In the parent process...\n");
}
}
