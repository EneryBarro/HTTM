#include <stdio.h>
#include <stdarg.h>

unsigned int getNumOfVaidPairs(int quan, ...);
unsigned int getNumOfVaidPairsVA(int quan, ...);

int main()
{
    printf("PTR : %d\n\n", getNumOfVaidPairs(5 /*quantity of numbers*/, 654, 912, 54, 8, 214));
    printf("VA : %d\n\n", getNumOfVaidPairsVA(5 /*quantity of numbers*/, 654, 912, 54, 8, 214));

    return 0;
}

unsigned int getNumOfVaidPairs(int quan, ...)
{
    quan--;

    unsigned int num = 0;



    for (char *arg_ptr = (char *)&quan; quan > 0; quan--)
    {
        arg_ptr = arg_ptr + sizeof(int);
        if (*arg_ptr < *(arg_ptr + sizeof(int)))
            num++;
    }



    return num;
}

unsigned int getNumOfVaidPairsVA(int quan, ...)
{
    quan--;

    unsigned int num = 0;



    va_list marker;
    va_start(marker, quan);

    for (int i = 0, tmp_1 = va_arg(marker, int), tmp_2; i < quan; i++)
    {
        if (tmp_1 < (tmp_2 = va_arg(marker, int)))
            num++;
        tmp_1 = tmp_2;
    }

    va_end(marker);



    return num;
}




