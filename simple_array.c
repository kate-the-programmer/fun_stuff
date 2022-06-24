#include <stdio.h>

int main(void)
{
    printf("\nHello World!!\n");

    int array[5];

    for(int i=0; i<5; i++)
        array[i] = 10+i;

    for(int i=0; i<5; i++)
        printf("%d\n",array[i]);

    return 0;
}