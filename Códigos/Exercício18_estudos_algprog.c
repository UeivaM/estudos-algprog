#include <stdio.h>
#include <conio.h>
int main(void)
{
    for (int num = 100; num <=200; num++)
    {
        if(num % 2 != 0)
        {
            printf("\n O número %d é ímpar", num);
        }
    }
    
    return 0;
}