#include<stdio.h>
#include<unistd.h>
#include <fcntl.h>

main()
{
int f=open("Hello.txt",O_RDONLY);

char text[500];
read(f,text,100);
printf("%s\n",text);

close(f);

return 0;
}
