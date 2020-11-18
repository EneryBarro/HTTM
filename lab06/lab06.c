#include <stdio.h>
#include <math.h>
//#include <conio.h>

void main()
{
    int chislo, sotni, desiatki, chisla, tusachi;

    puts("Please enter a number from 100 to 999\n");
    scanf("%d", &chislo);

    tusachi = chislo / 100;
    switch (tusachi)
    {
    case 1: puts("sto"); break;
    case 2: puts("Dvesti"); break;
    case 3: puts("Trista"); break;
    case 4: puts("Chetiresta"); break;
    case 5: puts("Piatsot"); break;
    case 6: puts("Shestsot"); break;
    case 7: puts("Semsot"); break;
    case 8: puts("Vosemsot"); break;
    case 9: puts("Deviatsot"); break;
    }

    desiatki = (chislo % 100) / 10;
    switch (desiatki)
    {
    case 1: puts("Desiat"); break;
    case 2: puts("Dvadcat"); break;
    case 3: puts("Tridcat"); break;
    case 4: puts("Sorok"); break;
    case 5: puts("Piatdesiat"); break;
    case 6: puts("Shestdesiat"); break;
    case 7: puts("Semdesiat"); break;
    case 8: puts("Vosemdesiat"); break;
    case 9: puts("Devianosto"); break;
    }

    chisla = (chislo % 100) % 10;
    switch (chisla)
    {
    case 1: puts("Odin"); break;
    case 2: puts("Dva"); break;
    case 3: puts("Tri"); break;
    case 4: puts("Chetire"); break;
    case 5: puts("Piat"); break;
    case 6: puts("Shest"); break;
    case 7: puts("Sem"); break;
    case 8: puts("Vosem"); break;
    case 9: puts("Deviat"); break;
    }
     return 0;
}
