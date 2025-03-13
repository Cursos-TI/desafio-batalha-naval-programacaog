#include <stdio.h>
 
int main() {


    int tabu[10][10];

    int i=0, j=0, num=0;

    printf("       BATALHA NAVAL\n");
    printf("   A B C D E F G H I J\n");
    while (j<10)
    {
        i=0;
        while (i<10)
        {
            tabu[i][j] = 0;
            i++;
        }
        j++;
    }
 // vertical   
    tabu[1][6] = 3;
    tabu[2][6] = 3; 
    tabu[3][6] = 3;  

// horizontal

    tabu[5][4] = 3;
    tabu[5][5] = 3; 
    tabu[5][6] = 3; 


    for ( i = 0; i < 10; i++)
    {
        printf("%d  ", num);
        for ( j = 0; j < 10; j++)
        {
            printf("%d ", tabu[i][j]);
        }
        num++;
        printf("\n");
    }
    









    return 0;
}