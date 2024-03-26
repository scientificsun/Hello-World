#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    printf("Hello, World!\n%04d\n", argc);
    if(argc > 1)
        for(i=1, i < argc, i++)
            {
                printf("%02d %s\n", i, argv[i]);
            }
    exit(0);
}
    
