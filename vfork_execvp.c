
#include<stdio.h>
#include<unistd.h>

main()
{
printf("This is the parent process with ID = %d \n",getpid());

char *arg[2] = {"ls",NULL};

pid_t p;
p = vfork();

if(p == 0)
{
printf("This is the child process with ID  = %d \n",getpid());
execvp("ls",arg);
}
else if(p == -1)
{
printf("Error reported");
perror("error with vfork");
}

else
{
printf("This is the parent process again ..with ID = %d\n",getpid());
}
}
