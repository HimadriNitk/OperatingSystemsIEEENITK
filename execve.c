

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    char *argv[] = {"/bin/ls", NULL};
    char *envp[] =
    {
        NULL
    };
execve(argv[0], &argv[0], envp);
}

