#include <stdio.h>
#include <stdlib.h>

unsigned int Number1 = 5;
unsigned int Number2 = 52;

int main()
{
    Number1 += 1; // => Number1 = Number1 + 1;


    printf("Result = %i \n", (Number1 << 1));
    printf("Result = %i \n", (Number1 << 2));
    printf("Result = %i \n", (Number1 << 3));

    printf("Result = %0.3f  \n", (float)(Number2 >> 1));
    printf("Result = %0.3f  \n", (float)(Number2 >> 2));
    printf("Result = %0.3f  \n", (float)(Number2 >> 3));
    printf("Result = %0.3f  \n", (float)(Number2 >> 4));
    printf("Result = %0.3f  \n", (float)(Number2 >> 5));

    printf("address = 0x%X \n", &Number1);
    printf("address = 0x%X \n", &Number2);

    printf("Value = %i \n", *(&Number1));

    printf("Test = %i \n", 4);



    return 0;
}
