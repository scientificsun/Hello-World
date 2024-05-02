#include <stdio.h>
#include <stdlib.h>

int report(int count)
{
        printf("%03d Arguments\n", count);
        return(0);
}
    
int main(int argc, char **argv)
{
    int    i;
    
    printf("Hello, World!\n");
    if(argc > 1)
        for(i=1; i < argc; i++)
            {
                printf("%02d %s\n", i, argv[i]);
            }
        report(argc-1);
    exit(0);
}


