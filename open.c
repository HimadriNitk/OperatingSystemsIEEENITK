#include<stdio.h>
#include<unistd.h>
#include <fcntl.h>


main()
{
printf("Implementation of open command...\n");

int f = open("./Hello.txt",O_WRONLY);

write(f,"Hello, This is an implemetaion of file operation system calls",100);

close(f);

return 0;
}

