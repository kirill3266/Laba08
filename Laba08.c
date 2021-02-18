#include "Laba08.h"

void matrix(int mas[N][N]) {
	int MinStr[N], MinCol[N], MaxStr[N], MaxCol[N];
	init(MinStr, MinCol, MaxStr, MaxCol, mas);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N-1; j++) {
			if (mas[i][j + 1] >= MaxStr[i]) MaxStr[i] = mas[i][j + 1];
			else if(mas[i][j+1] <= MinStr[i]) MinStr[i] = mas[i][j + 1];
			if (mas[j + 1][i] >= MaxCol[i]) MaxCol[i] = mas[j + 1][i];
			else if (mas[j+1][i]<=MinCol[i]) MinCol[i] = mas[j + 1][i];
		}
	for (int i = 0; i < N; i++)
		printf("MinStr[%d] = %d\t", i, MinStr[i]);
	printf("\n");
	for (int i = 0; i < N; i++)
		printf("MaxStr[%d] = %d\t", i, MaxStr[i]);
	printf("\n");
	for (int i = 0; i < N; i++)
		printf("MinCol[%d] = %d\t", i, MinCol[i]);
	printf("\n");
	for (int i = 0; i < N; i++)
		printf("MaxCol[%d] = %d\t", i, MaxCol[i]);
	printf("\n\n");

	int counter = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (mas[i][j] == MaxStr[i] && mas[i][j] == MinCol[j] || mas[i][j] == MinStr[i] && mas[i][j] == MaxCol[j]) {
				printf("Point[%d] = [%d] [%d]\n", counter++, i, j);
			}
	if (counter == 0) printf("No points!\n\a");
}

void init(int* MinStr, int* MinCol, int* MaxStr, int* MaxCol, int mas[5][5]) {
	for (int i = 0; i < N; i++) {
		MinStr[i] = mas[i][0];
		MaxStr[i] = mas[i][0];
			MinCol[i] = mas[0][i];
			MaxCol[i] = mas[0][i];
		}
}