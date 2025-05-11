#include "exercises.h"

// -------------------------------
// Functions that return a single value
// -------------------------------
//1
int calcSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
//2
int findMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
//3
float calcAverage(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return (float)sum / n;
}
//4
int countEvens(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}
//5
int sumFirstLast(int arr[], int n)
{
    return arr[0] + arr[n - 1];
}
//6
int findMin(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
//7
int subtractArraysSum(int a[], int b[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += a[i] - b[i];
    }
    return total;
}
//8
int mergeArraysSum(int a[], int n1, int b[], int n2)
{
    int total = 0;
    
    for (int i = 0; i < n1; i++)
    {
        total += a[i];
    }

    for (int i = 0; i < n2; i++)
    {
        total += b[i];
    }

    return total;
}
//9
int productArray(int arr[], int n)
{
    int product = 1;

    for (int i = 0; i < n; i++) {
        product *= arr[i];
    }

    return product;
}

// -------------------------------
// Function that returns multiple values via pointer
// -------------------------------

void calcSumAverage(int arr[], int n, int *sum, float *average)
{
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total = total + arr[i];
    }

    *sum = total;
    *average = (float)total / n;
}
