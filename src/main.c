#include <stdio.h>
#include "exercises.h"

int main(void)
{
  int arr[] = {10, 20, 30, 40};
int n = 4;
int sum;
float average;

calcSumAverage(arr, n, &sum, &average);

printf("Suma: %d\n", sum);
printf("Promedio: %.2f\n", average);

    return 0;
}
