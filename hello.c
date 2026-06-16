#include <stdio.h>

static int b;

extern int my_func(int a)
{
     int c = b;
     c+=1;
     c+=a;
     return c;
}

extern int main(int argc, char *argv[])
{
    b = 4;
    printf("%d\n", my_func(2));
    printf("Hello, World from here!\n");
    return 0;
}