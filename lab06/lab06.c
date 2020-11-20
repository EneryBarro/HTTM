#include <stdio.h>
#include <math.h>

 int main()
{
    int chislo, sotni, desiatki, chisla, tusachi;

    printf("Please enter a number from 1 to 9999\n");
    scanf("%d", &chislo);

    tusachi = chislo / 1000;
    switch (tusachi)
    {
    case 1: printf("Odna Tysacha "); break;
    case 2: printf("Dve Tysachi "); break;
    case 3: printf("Tri Tysachi "); break;
    case 4: printf("Chetire Tysach "); break;
    case 5: printf("Piat Tysach "); break;
    case 6: printf("Shest Tysach "); break;
    case 7: printf("Sem Tysach "); break;
    case 8: printf("Vosem Tysach "); break;
    case 9: printf("Deviat Tysach "); break;
    }

    sotni = (chislo / 100) % 10;
    switch (sotni)
    {
    case 1: printf("Sto "); break;
    case 2: printf("Dvesti "); break;
    case 3: printf("Trista "); break;
    case 4: printf("Chetiresta "); break;
    case 5: printf("Piatsot "); break;
    case 6: printf("Shestsot "); break;
    case 7: printf("Semsot "); break;
    case 8: printf("Vosemsot "); break;
    case 9: printf("Deviatsot "); break;
    }

    desiatki = (chislo % 100) / 10;
    switch (desiatki)
    {
    case 1: printf("Desiat "); break;
    case 2: printf("Dvadcat "); break;
    case 3: printf("Tridcat "); break;
    case 4: printf("Sorok "); break;
    case 5: printf("Piatdesiat "); break;
    case 6: printf("Shestdesiat "); break;
    case 7: printf("Semdesiat "); break;
    case 8: printf("Vosemdesiat "); break;
    case 9: printf("Devianosto "); break;
    }

    chisla = (chislo % 100) % 10;
    switch (chisla)
    {
    case 1: printf("Odin\n"); break;
    case 2: printf("Dva\n"); break;
    case 3: printf("Tri\n"); break;
    case 4: printf("Chetire\n"); break;
    case 5: printf("Piat\n"); break;
    case 6: printf("Shest\n"); break;
    case 7: printf("Sem\n"); break;
    case 8: printf("Vosem\n"); break;
    case 9: printf("Deviat\n"); break;
    }
    
    return 0;
}


