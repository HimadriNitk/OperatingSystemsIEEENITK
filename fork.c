#include<stdio.h>
#include<unistd.h>

main()
{

int newp ;

printf("This is the parent process with ID = %d \n",getpid());

newp = fork();

/* this works only in some cases when the parent pid differs from child pid by 1 , use else statement for other cases */

if(newp == getpid() + 1 )
	printf("Still the parent process having ID = %d \n",getpid());

if(newp == 0)
{
	printf("This is the child process with ID = %d \n ",getpid());
}
}
