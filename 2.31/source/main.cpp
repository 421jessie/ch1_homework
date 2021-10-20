#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int x, y, z, i;
    printf("number        square        cube\n");
    for (i = 1; i < 10; i++)
    {
        x = i;
        y = i * i;
        z = i * i * i;
        printf("%d\t%d\t%d",x,y,z);
        printf("\n");
    }
    system("pause");
    return 0;
}