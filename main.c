#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Laba08.h"



int main() {
	printf("Choose input(1-randomize,2-manual input, 3 - test): ");
    char input;
    int mas[N][N];
    int b;
    int n;
    scanf("%c", &input);
    printf("\n");
    switch (input) {
    case '1':
        srand(time(NULL));
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                mas[i][j] = rand()%100;
                printf("a[%d][%d] = %d\t", i, j, mas[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        break;
    case '2':
        for (int i=0;i<N;i++)
            for (int j = 0; j < N; j++) {
                printf("a[%d][%d] = ",i,j);
                scanf("%d", &mas[i][j]);
            }
        break;
    case '3':
        b = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                mas[i][j] = b;
                b++;
                printf("a[%d][%d] = %d\t", i, j, mas[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        break;
    default:
        printf("Incorrect input!\n\a");
        return 1;
    }
    matrix(mas);
	return 0;
}