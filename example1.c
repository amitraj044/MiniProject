#include "stdio.h"

int var1 = 100;

void function1()
{
    for (int index = 10; index > -1; index--)
    {   
        var1 = var1 /index ;
    }
}
int main()
{
    function();
    printf("%d\n", var1);
    
    return 0;
}