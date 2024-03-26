#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int    i;
    
    printf("Hello, World!\n");
    if(argc > 1)
        for(i=1; i < argc; i++)
            {
                printf("%02d %s\n", i, argv[i]);
            }
    exit(0);
}
    
