#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("    *    \n");
	printf("   ***   \n");
	printf("  *****  \n");
	printf(" ******* \n");
	printf("*********\n");

    printf("        \n");
    printf("        \n");
    printf("        \n");

    int x, y, z;

    for (x = 1; x <= 9; x++)
    {
        if (x % 2 != 0) 
        {
            for (z = 0; z < (9 - x) / 2; z++)
                printf(" ");
            for (y = 1; y <= x; y++)
                printf("*");
        }
        else
            printf("\n");
    }
    printf("\n");
    system("pause");

return 0;
}
    
    