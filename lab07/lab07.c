#include <stdio.h>
#include <stdarg.h>

unsigned int getNumberOfValidPairs(int quantity, ...);

int main()
{
    printf("Number of pairs: %d\n\n", getNumberOfValidPairs(20 /*quantity of numbers*/, 851, 84, 4, 84, 
    531, 1, 4, 3, 9, 7, 5689, 1369, 666, 13, 6874, 541, 8745, 84, 456, 5465));

    return 0;
}


unsigned int getNumberOfValidPairs(int quantity, ...)
{
    quantity--;

    unsigned int num = 0;



    va_list marker;
    va_start(marker, quantity);

    for (int i = 0, tmp_1 = va_arg(marker, int), tmp_2; i < quantity; i++)
    {
        if (tmp_1 < (tmp_2 = va_arg(marker, int)))
            num++;
        tmp_1 = tmp_2;
    }

    va_end(marker);



    return num;
}


